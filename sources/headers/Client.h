//
// Created by Gleb Vorfolomeew on 19/09/2017.
//

#ifndef CLIENT_CLIENT_H
#define CLIENT_CLIENT_H

#include "sources/headers/Socket.h"
#include "sources/headers/TCPConnector.h"
#include "sources/headers/TCPInputStream.h"
#include "sources/headers/TCPOutputStream.h"
#include "sources/headers/address_geters.h"
#include <vector>

class Client
{
public:
    using addres_type = struct sockaddr_in;
    using port_type = uint16_t;

    Client() = default;
    ~Client() = default;

    void start()
    {
        std::cout << "Please, type IP address: ";
        std::string ip_str;
        std::cin >> ip_str;
        try
        {  
            this->conect_to_server(ip_str);
            std::cout << "Server answer: \n" << this->conection_status();

            std::string command;
            std::vector<std::string> args;
        
            std::string token;
            std::string server_answer;
            while (std::getline(std::cin, command))
            {
                std::stringstream ss;
                ss << command;

                while(std::getline(ss, token, ' '))
                    args.push_back(token);

                if (args.size() >= 2)
                {
                    server_answer = this->send_ftp_command(args.at(0) + ' ' + args.at(1));
                    std::cout << "Server answer: \n" << server_answer;
                }
                if (args.size() == 1)
                {
                    server_answer = this->send_ftp_command(std::move(args.at(0)));
                    std::cout << "Server answer: \n"<< server_answer;

                    if (args.at(0) == "quit\r\n")
                        return;
                }
                

                if (!server_answer.empty() && std::stoi(server_answer) == 227)
                { 
                    TCPConnector file_connector; 
                    file_connector.connect_to(server_answer);

                    std::cout << "Passive FTP>>";

                    token.clear();
                    server_answer.clear();
                    args.clear();
                    command.clear();

                    std::getline(std::cin, command);
                    std::stringstream ss_local;
                    ss_local << command;

                    while(std::getline(ss_local, token, ' '))
                        args.push_back(token);

                    if (args.size() >= 2)
                    {
                        std::ofstream out;
                        std::string file;
                        if (args.at(0) == "retr" )
                        {
                            server_answer = this->send_ftp_command(args.at(0) + ' ' + args.at(1));
                            int answer_code = std::stoi(server_answer); 

                            if (answer_code == 150)
                            {
                                passive_send_ftp_retr("", file, file_connector);
                                std::cout << "Server answer: \n" << server_answer + '\n';

                            }
                            else if (answer_code == 550)
                            {
                                std::cout << "Server answer: \n" << server_answer + '\n';
                                command.clear();
                                token.clear();
                                args.clear();
                                server_answer.clear();

                                continue;            
                            }

                            out.open(args.at(1), std::ios::binary);

                            server_answer = this->send_ftp_command("");

                            if(std::stoi(server_answer) == 226)
                                out.open(args.at(1), std::ios::binary);

                            std::cout << server_answer;
                        }
                        else                       
                        {
                            server_answer = this->send_ftp_command(args.at(0) + ' ' + args.at(1));
                        }   

                        if (out.is_open())
                            std::copy(file.begin(), file.end(), std::ostreambuf_iterator<char>(out));

                                            }
                    if (args.size() == 1)
                    {
                        this->passive_send_ftp_retr(std::move(args.at(0)), server_answer,file_connector);

                        std::cout << "Server answer: \n"<< server_answer;
                        std::cout << send_ftp_command("");
                   }

                   command.clear();
                   token.clear();
                   args.clear();
                   server_answer.clear();

                   continue;
                }

                std::cout << "FTP>> ";
                command.clear();
                token.clear();
                args.clear();
            }
        }
        catch (fail_opening_socket& server_exception)
        {
            std::cerr << server_exception.what() << '\n';
            exit(1);
        }
        catch (std::exception& e)
        {
            std::cout << e.what();
            exit(2);
        }       
    }

    
protected:
    void conect_to_server(const std::string& server_ip_address);
    void create_file_transfer_conection(const std::string &server_ip_address);

    template <typename InternetInputStream = TCPInputStream>
    void send_file(const std::string& file_path, InternetInputStream& stream);
    std::string conection_status()
    {
        std::string answer;
        read_short_str(m_conector.get_socket().c_socket(), answer);
        return answer;
    }

    std::string send_ftp_command(std::string &&comand)
    {
        std::string answer;

        if (!comand.empty())
        {
            comand += "\r\n";
            int64_t send_inf = send_short_str(m_conector.get_socket().c_socket(), comand.c_str());
        }

        answer.clear();

        read_data(m_conector.get_socket().c_socket(), answer);

        int64_t timeout = 1000;
        if (answer.empty())
            while (timeout <= 5000)
            {
                read_data(m_conector.get_socket().c_socket(), answer, timeout); 
                timeout += 1000;
            }
        
        if (answer.empty())
            std::cout << "Timeout\n";

        return answer;
    }

    void passive_send_ftp_retr(std::string &&comand, std::string &answer_pass, TCPConnector &file_conector)
    {
        if (!comand.empty())
        {
            comand += "\r\n";
            int64_t send_inf = send_short_str(m_conector.get_socket().c_socket(), comand.c_str());
        }
        
        int64_t timeout = 1000;
        if (answer_pass.empty())
            while (timeout <= 5000)
            {
                read_data(file_conector.get_socket().c_socket(), answer_pass, timeout); 
                timeout += 1000;
            }
        
        if (answer_pass.empty())
            std::cout << "Timeout\n";

    }
private:
   TCPConnector m_conector;
   TCPInputStream m_istream;
   TCPOutputStream m_ostream; 
};

template <typename InternetInputStream>
void
Client::send_file(const std::string& file_path, InternetInputStream& stream)
{
    stream.open(file_path);
    std::cout << "Start to send file\n";
    stream.stream_in(m_conector.get_socket());
}


#endif //CLIENT_CLIENT_H

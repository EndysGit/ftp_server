//
// Created by Gleb Vorfolomeew on 19/09/2017.
//

#ifndef CLIENT_CLIENT_H
#define CLIENT_CLIENT_H

#include "Socket.h"
#include "TCPConnector.h"
#include "TCPInputStream.h"

class Client
{
public:
    using addres_type = struct sockaddr_in;
    using port_type = uint16_t;

    Client() = default;
    ~Client() = default;

    void conect_to_server(const std::string& server_ip_address);

    template <typename InternetInputStream = TCPInputStream>
    void send_file(const std::string& file_path, InternetInputStream& stream);
private:
   TCPConnector m_conector;
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

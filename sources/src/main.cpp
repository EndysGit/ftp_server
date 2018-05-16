// Client side C/C++ program to demonstrate Socket programming
#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <unistd.h>
#include <netdb.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>
#include <fstream>
<<<<<<< HEAD
=======
#include <sstream>
>>>>>>> dev
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include "sources/headers/TCPInputStream.h"
<<<<<<< HEAD
=======
#include "sources/headers/TCPOutputStream.h"
>>>>>>> dev
#include "sources/headers/Client.h"

int main(int argc, char const *argv[])
{
<<<<<<< HEAD
    std::cout << "Please, type IP address: ";
    std::string ip_str;
    std::cin >> ip_str;

    std::cout << "Plese, type port: ";
    uint16_t port;
    std::cin >> port;

    try
    {
        Client client;

        client.conect_to_server(ip_str, port);

        std::cout << "Please type full path to file:\n";
        std::string file_path_str;
        std::cin >> file_path_str;
        std::cout << '\n' << file_path_str << '\n';

        TCPInputStream tcp_input_stream;
        client.send_file(file_path_str, tcp_input_stream);

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

=======
    Client client;
    client.start();
>>>>>>> dev
    return 0;
}

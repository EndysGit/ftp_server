//
// Created by Gleb Vorfolomeew on 19/09/2017.
//

#ifndef CLIENT_TCPCONNECTOR_H
#define CLIENT_TCPCONNECTOR_H

<<<<<<< HEAD
#include "sources/headers/service_header.h"
#include <iostream>
#include "sources/headers/Socket.h"
//#include "sources/headers/address_geters.h"
=======
#include "sources/headers/service_header.h" 
#include "sources/headers/address_geters.h"
#include <iostream>
#include "sources/headers/Socket.h"
>>>>>>> dev


class TCPConnector
{
public:
    using addres_type = struct sockaddr_in;

    TCPConnector();
<<<<<<< HEAD

    ~TCPConnector() = default;

    int get_socket() const noexcept;
    void set_port(uint16_t port) noexcept;
    void connect_to(const std::string& destionation_address);
=======
    TCPConnector(const TCPConnector &connectior);

    ~TCPConnector() = default;

    const Socket& get_socket() const noexcept;
    void set_port(uint16_t port) noexcept;
    void connect_to(const std::string& destionation_address);
    void drop_conection();
    bool is_valid();
>>>>>>> dev

private:
    addres_type m_destination_address;
    Socket m_socket;
};


#endif //CLIENT_TCPCONNECTOR_H

//
// Created by Gleb Vorfolomeew on 19/09/2017.
//

#include "sources/headers/TCPConnector.h"

TCPConnector::TCPConnector()
{
    m_socket = Socket(c_IPv4, c_TCP, c_default_protocol);

    memset(&m_destination_address, '0', sizeof(m_destination_address));

    m_destination_address.sin_family = c_IPv4;
    m_destination_address.sin_port = htons(c_port);
}

<<<<<<< HEAD
int TCPConnector::get_socket() const noexcept
=======
TCPConnector::TCPConnector(const TCPConnector &connector)
{
    this->m_destination_address = connector.m_destination_address;
    this->m_socket = connector.m_socket.c_socket();
}

const Socket& TCPConnector::get_socket() const noexcept
>>>>>>> dev
{
    return m_socket;
}

<<<<<<< HEAD
=======
//depricated 
>>>>>>> dev
void TCPConnector::set_port(uint16_t port) noexcept
{
    m_destination_address.sin_port = htons(port);
}

void
TCPConnector::connect_to(const std::string &destionation_address)
{    
<<<<<<< HEAD

    if(inet_pton(c_IPv4, destionation_address.c_str(), &m_destination_address.sin_addr) <= 0)
    {
        std::cout << "\nInvalid address/ Address not supported \n";
        throw connection_fail("Connection fail");
    }

    if (connect(m_socket, (struct sockaddr *)&m_destination_address, sizeof(m_destination_address)) < 0)
    {
        std::cout << "\nConnection Failed \n";
        throw connection_fail("Connection fail");
    }
    std::cout << "Connection established'\n";
=======
   bool is_domain = true;
    if (!isalpha(destionation_address.at(0)))
        is_domain = false;

        sockaddr *address_information;
        socklen_t socklen;
        std::tie(address_information, m_socket, socklen) = domain_get_address(destionation_address, 
                                                                              c_IPv4, 
                                                                              c_TCP, 
                                                                              is_domain);

        if (connect(m_socket, address_information, socklen) < 0)
        {
            std::cout << "\nConnection Failed \n";
            throw connection_fail("Connection fail\n");
        }
    std::cout << "Connection with  established\n";
}

void 
TCPConnector::drop_conection()
{
    
}

bool TCPConnector::is_valid()
{
    return m_socket.isValid();
>>>>>>> dev
}

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

int TCPConnector::get_socket() const noexcept
{
    return m_socket;
}

void TCPConnector::set_port(uint16_t port) noexcept
{
    m_destination_address.sin_port = htons(port);
}

void
TCPConnector::connect_to(const std::string &destionation_address)
{    

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
}

//
// Created by Gleb Vorfolomeew on 19/09/2017.
//

#include "sources/headers/Client.h"


void Client::conect_to_server(const std::string& server_ip_address, uint16_t port)
{
    m_conector.set_port(port);
    m_conector.connect_to(server_ip_address);
}


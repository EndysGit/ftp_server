#include "sources/headers/address_geters.h"
#include <iostream>

bool 
is_domain_name(const std::string &str)
{
    for (const auto &chr : str)
        if (!isnumber(chr) || chr != '.')
            return true;
    
    return false;
} 

void 
domain_parse_name(const std::string &address_str, domain_address &domain_addr)
{
    bool still_protocol_type = true;
    for(const auto &chr : address_str )
    {
        if (chr == ':')
        {
            still_protocol_type = false;
            continue;
        }

        if (still_protocol_type)
            domain_addr.app_protocol_type.push_back(chr);
        else
            if (chr != '/')
                domain_addr.domain.push_back(chr);
    }
}


std::tuple<sockaddr*, int, socklen_t>
domain_get_address(const std::string &address, int nw_prot_family, int sock_type)
{
    domain_address domain_adr;
    domain_parse_name(address, domain_adr);
    std::cout << domain_adr.domain << ' ' << domain_adr.app_protocol_type;

    int temp_socket;
    addrinfo hints;
    addrinfo *servinfo; 
    addrinfo *p;
    int rv;
    
    memset(&hints, 0, sizeof hints);
    hints.ai_family = nw_prot_family; 
    hints.ai_socktype = sock_type;
    
    if ((rv = getaddrinfo(domain_adr.domain.c_str(), 
                          domain_adr.app_protocol_type.c_str(), 
                          &hints, &servinfo)) != 0) {
            fprintf(stderr, "getaddrinfo: %s\n", gai_strerror(rv));
            exit(1); //TODO: add exception instead of exit code
    }

    //loop through all the results and connect to the first we can
    for(p = servinfo; p != nullptr; p = p->ai_next) 
    {
        temp_socket = socket(p->ai_family, p->ai_socktype, p->ai_protocol);
        if (temp_socket == -1) 
        {
            perror("socket");
            continue;
        } 

        break;
    }

    if (p == NULL) 
    {
        // looped off the end of the list with no successful bind
        fprintf(stderr, "failed to bind socket\n");
        exit(2);
    }

   // freeaddrinfo(servinfo); 

    return std::make_tuple(servinfo->ai_addr, temp_socket, servinfo->ai_addrlen);
}

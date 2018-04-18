#ifndef ADDRESS_GETERS_HH
#define ADDRESS_GETERS_HH

#include "sources/headers/service_header.h" 
#include <tuple>


bool is_domain_name(const std::string &str)
{
    for (const auto &chr : str)
        if (!isnumber(chr) || chr != '.')
            return true;
    
    return false;
} 

struct domain_address
{
    std::string domain;
    std::string app_protocol_type;
};

void domain_parse_name(const std::string &address_str, domain_address &domain_adr)
{
    // https://beej.us/guide/bgnet/html/multi/getaddrinfoman.html
    bool still_protocol_type = true;
    for(const auto &chr : address_str )
    {
        if (chr != ':')
            still_protocol_type = false;

        if (still_protocol_type)
            domain_adr.app_protocol_type.push_back(chr);
        else 
           domain_adr.domain.push_back(chr); 
    }
}

void get_valid_socket

addrinfo* domain_get_address_from_dns(const std::string &address, int &socket)
{
    domain_address domain_adr;
    parse_domain_name(address, domain_adr);

    struct addrinfo hints, *servinfo, *p;
    int rv;
    
    memset(&hints, 0, sizeof hints);
    hints.ai_family = c_IPv4; // use AF_INET6 to force IPv6
    hints.ai_socktype = c_TCP;

    if ((rv = getaddrinfo(domain_adr.domain.c_str(), 
                          domain_adr.app_protocol_type.c_str(), 
                          &hints, &servinfo)) != 0) {
            fprintf(stderr, "getaddrinfo: %s\n", gai_strerror(rv));
             exit(1);
    }

    return servinfo;

    //loop through all the results and connect to the first we can
    for(p = servinfo; p != NULL; p = p->ai_next) 
    {
        if ((socket = socket(p->ai_family, p->ai_socktype, p->ai_protocol)) == -1) 
        {
            perror("socket");
            continue;
        } 
    break; // if we get here, we must have connected successfully
    }
}

#endif // ADDRESS_GETERS

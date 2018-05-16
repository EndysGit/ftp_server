<<<<<<< HEAD
#ifndef ADDRESS_GETERS_HH
#define ADDRESS_GETERS_HH
=======
#ifndef CLIENT_ADDRESS_GETERS_H
#define CLIENT_ADDRESS_GETERS_H
>>>>>>> dev

#include "sources/headers/service_header.h" 
#include <tuple>

<<<<<<< HEAD

bool is_domain_name(const std::string &str)
{
    for (const auto &chr : str)
        if (!isnumber(chr) || chr != '.')
            return true;
    
    return false;
} 

=======
>>>>>>> dev
struct domain_address
{
    std::string domain;
    std::string app_protocol_type;
};

<<<<<<< HEAD
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
=======
bool 
is_domain_name(const std::string &str);
 
void 
domain_parse_name(const std::string &address_str, domain_address &domain_addr);

void 
pars_addr_from_ftp(const std::string &address_str, domain_address &domain_addr);

std::tuple<sockaddr*, int, socklen_t>
domain_get_address(const std::string &address, int nw_prot_family = c_IPv4, int sock_type = c_TCP, bool is_domain = true);


#endif // CLIENT_ADDRESS_GETERS_H
>>>>>>> dev

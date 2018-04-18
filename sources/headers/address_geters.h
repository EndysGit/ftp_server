#ifndef CLIENT_ADDRESS_GETERS_H
#define CLIENT_ADDRESS_GETERS_H

#include "sources/headers/service_header.h" 
#include <tuple>

struct domain_address
{
    std::string domain;
    std::string app_protocol_type;
};

bool 
is_domain_name(const std::string &str);
 
void 
domain_parse_name(const std::string &address_str, domain_address &domain_addr);

std::tuple<sockaddr*, int, socklen_t>
domain_get_address(const std::string &address, int nw_prot_family = c_IPv4, int sock_type = c_TCP);


#endif // CLIENT_ADDRESS_GETERS_H

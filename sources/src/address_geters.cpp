#include "sources/headers/address_geters.h"
#include <iostream>
#include <string>

bool 
is_domain_name(const std::string &str)
{
    for (const auto &chr : str)
        if (isnumber(chr) || chr != '.')
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

void
pars_addr_from_ftp(const std::string &addres_str, domain_address &domain_addr)
{
    int port{0};
    std::string str = addres_str;
    std::string ip;
   
    str.erase(0, str.find_first_of('(') + 1); 
    str.erase(str.find_first_of(')'), str.size() - 1);

    // parse format (i, i, i, i, p, p)
    // where i - parts of ip
    // p numbers to evalueate port
    for (const auto &el : str)
    {
        if (isdigit(el))
            ip.push_back(el);
    
        if (el == ',')
            ip.push_back('.');
    }

    // Fin port using formula port = 256 * x + y 
    for (size_t i{0}; i < 2; ++i)
    {
        size_t last_dot_pos = ip.find_last_of('.');
        port += (255 * i + 1) * stoi(ip.substr(last_dot_pos + 1));
        ip.erase(last_dot_pos, ip.size() - 1);
    }

    domain_addr.domain = ip;
    domain_addr.app_protocol_type = std::to_string(port);
    
    std::cout << "Try to connect to " << ip << ':' << port << '\n';
}

void 
parse_commom_address(const std::string &common_address, domain_address &domain_addr)
{
    std::copy(common_address.cbegin(), 
              common_address.cbegin() + common_address.find_first_of(':'), 
              std::back_inserter(domain_addr.domain));

    std::copy(common_address.cbegin() + common_address.find_first_of(':') + 1, 
              common_address.cend(), 
              std::back_inserter(domain_addr.app_protocol_type));

    std::cout << "Try to connect to host with address" + domain_addr.domain + ' ' + domain_addr.app_protocol_type + '\n'; 

}

bool common_address_cheker(const std::string &address_str)
{
    uint8_t counter{0};
    bool before_port{true};
    for (const auto ch : address_str)
    {
        if (isdigit(ch))
        {
            ++counter;
            if (counter > 3 && before_port)
                return false;
            if (counter > 5 && !before_port)
                return false;
            
            continue;
        }    
        if (ch == '.')
        {
            counter = 0;
            continue;
        }
        if (ch == ':')
        {
            counter = 0;
            before_port = false;
            continue;
        }

        return false;
    }

    return true;
}

std::tuple<sockaddr*, int, socklen_t>
domain_get_address(const std::string &address, int nw_prot_family, int sock_type, bool is_domain)
{
    domain_address domain_adr;
        
    if (common_address_cheker(address))
        parse_commom_address(address, domain_adr);
    else if (is_domain)
        domain_parse_name(address, domain_adr);
    else 
        pars_addr_from_ftp(address, domain_adr);
        
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
                          &hints, &servinfo)) != 0) 
    {
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


    return std::make_tuple(servinfo->ai_addr, temp_socket, servinfo->ai_addrlen);
}

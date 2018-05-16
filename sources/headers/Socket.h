//
// Created by Gleb Vorfolomeew on 16/09/2017.
//

#ifndef SERVER_SOCKET_H
#define SERVER_SOCKET_H

#include "sources/headers/service_header.h"
#include "sources/headers/server_exceptions.h"


class Socket
{
public:
    using file_descriptor_type  =   int64_t;
    using domain_type           =   uint16_t;
    using socket_type           =   int64_t;
    using protocol_type         =   uint16_t;

    explicit Socket(domain_type domain = 0,
                    socket_type type = 0,
                    protocol_type protocol = c_default_protocol);
    Socket(Socket&& socket);
    ~Socket() noexcept;

    // Interfaces
    // ----------
    operator int() const noexcept { return static_cast<int>(m_socket_fd); }
    Socket& operator=(Socket&& socket);
    Socket& operator=(int c_socket);
    const int& c_socket() const noexcept;
    bool isValid() const noexcept;
    void createSocket();
    auto getSocketDomain() const noexcept -> domain_type;
    auto getSocketType() const noexcept -> socket_type;
    auto getSocketProtocol() const noexcept -> protocol_type;

    // Restricted
    // ----------
    //Socket() = delete; // ??? decide!
    Socket(const Socket& socket) = delete;
    Socket& operator=(const Socket& socket) = delete;
private:
    file_descriptor_type m_socket_fd;
    domain_type m_domain;
    socket_type m_type;
    protocol_type m_protocol;
};


#endif //SERVER_SOCKET_H

//
// Created by Gleb Vorfolomeew on 16/09/2017.
//

#include "sources/headers/Socket.h"


Socket::Socket(domain_type domain, socket_type type, protocol_type protocol)
        : m_domain{domain}, m_type{type}, m_protocol{protocol}
{
    if (domain == 0 && type == 0)
    {
        m_socket_fd = -1;
        log("Invalid socket was created");
    }
    else
    {
        log("Try to create socket");
        m_socket_fd = static_cast<int64_t>(socket(domain, type, protocol));
        if (m_socket_fd == 0) {
            std::string exception_message = "Fail to open socket: ";
            log(exception_message, m_socket_fd);
            throw fail_opening_socket(exception_message);
        }
        if (domain == c_IPv4)

            log("Socket is successfully created with id: ", m_socket_fd);
    }
}

Socket::Socket(Socket&& socket)
        : m_socket_fd{socket.m_socket_fd},
          m_domain{socket.m_domain},
          m_type{socket.m_type},
          m_protocol{socket.m_protocol}
{
    socket.m_socket_fd = -1;
    log("Socket was move constracted");
}

Socket::~Socket() noexcept
{
    if (m_socket_fd < 0)
        log("Invalid socket was destoyed");
    else
    {
        close(static_cast<int>(m_socket_fd));
        log("Socket was closed: ", m_socket_fd);
    }
}

Socket&
Socket::operator=(Socket&& socket)
{
    m_socket_fd = socket.m_socket_fd;
    m_domain = socket.m_domain;
    m_type = socket.m_type;
    m_type = socket.m_protocol;

    socket.m_socket_fd = -1;

    log("Socket was moved");

    return *this;
}

Socket&
Socket::operator=(int c_socket)
{
    m_socket_fd = c_socket;
}

bool
Socket::isValid() const noexcept
{
    return m_socket_fd >= 0;
}

void
Socket::createSocket()
{
    *this = Socket(m_domain, m_type, m_protocol);
}

auto
Socket::getSocketDomain() const noexcept -> domain_type
{
    return m_domain;
}

auto
Socket::getSocketType() const noexcept -> socket_type
{
    return m_type;
}

auto
Socket::getSocketProtocol() const noexcept -> protocol_type
{
    return m_protocol;
}
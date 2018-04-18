//
// Created by Gleb Vorfolomeew on 15/09/2017.
//

#include "sources/headers/server_exceptions.h"

server_exceptions_base::server_exceptions_base() noexcept
{

}

server_exceptions_base::~server_exceptions_base() noexcept
{

}

const char*
server_exceptions_base::what() const noexcept
{

}

fail_opening_socket::fail_opening_socket() noexcept
{

}

fail_opening_socket::fail_opening_socket(const char* exception_message)
        : m_exception_message{exception_message}
{

}

fail_opening_socket::fail_opening_socket(const std::string &exception_message)
        : m_exception_message{exception_message.c_str()}
{

}

fail_opening_socket::fail_opening_socket(const fail_opening_socket &fail_opening_socket)
        : m_exception_message{fail_opening_socket.m_exception_message}
{

}

fail_opening_socket::~fail_opening_socket() noexcept
{

}

const char*
fail_opening_socket::what() const noexcept
{
    return m_exception_message;
}

binding_fail::binding_fail() noexcept
{

}

binding_fail::binding_fail(const char *exception_message)
        : m_exception_message{exception_message}
{

}

binding_fail::binding_fail(const std::string& exceptinon_message)
        : m_exception_message{exceptinon_message.c_str()}
{

}

binding_fail::binding_fail(const binding_fail &binding_fail)
        : m_exception_message{binding_fail.m_exception_message}
{

}

binding_fail::~binding_fail()
{

}

const char*
binding_fail::what() const noexcept
{
    return m_exception_message;
}

fail_on_accept::fail_on_accept() noexcept
{

}

fail_on_accept::fail_on_accept(const std::string& exception_message)
        : m_exception_message{exception_message.c_str()}
{

}

fail_on_accept::fail_on_accept(const char* exception_message)
        : m_exception_message{exception_message}
{

}
fail_on_accept::fail_on_accept(const fail_on_accept& fail_on_accept)
        : m_exception_message{fail_on_accept.m_exception_message}
{

}

fail_on_accept::~fail_on_accept() noexcept
{

}

const char*
fail_on_accept::what() const noexcept
{
    return m_exception_message;
}

connection_fail::connection_fail() noexcept
{

}

connection_fail::connection_fail(const std::string &exception_message)
        : m_exception_message{exception_message.c_str()}
{

}

connection_fail::connection_fail(const char *exception_message)
        : m_exception_message{exception_message}
{

}

connection_fail::~connection_fail()
{

}

const char*
connection_fail::what() const noexcept
{
    return m_exception_message;
}
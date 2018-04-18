//
// Created by Gleb Vorfolomeew on 15/09/2017.
//

#ifndef SERVER_SERVER_EXCEPTIONS_H
#define SERVER_SERVER_EXCEPTIONS_H

#include <exception>
#include <string>

class server_exceptions_base : public std::exception
{
public:
    server_exceptions_base() noexcept;
    virtual ~server_exceptions_base() noexcept override;
    virtual const char* what() const noexcept override;
};

class fail_opening_socket : public server_exceptions_base
{
public:
    fail_opening_socket() noexcept;
    explicit fail_opening_socket(const std::string& exception_message);
    explicit fail_opening_socket(const char* exception_message);
    fail_opening_socket(const fail_opening_socket& fail_opening_socket);

    virtual ~fail_opening_socket() noexcept override;
    virtual const char* what() const noexcept override;
private:
    const char* m_exception_message;
};

class binding_fail : public server_exceptions_base
{
public:
    binding_fail() noexcept;
    explicit binding_fail(const std::string& exception_message);
    explicit binding_fail(const char* exception_message);
    binding_fail(const binding_fail& binding_fail);

    virtual ~binding_fail() noexcept override;
    virtual const char* what() const noexcept override;
private:
    const char* m_exception_message;
};

class fail_on_accept : public server_exceptions_base
{
public:
    fail_on_accept() noexcept;
    explicit fail_on_accept(const std::string& exception_message);
    explicit fail_on_accept(const char* exception_message);
    fail_on_accept(const fail_on_accept& fail_on_accept);

    virtual ~fail_on_accept() noexcept override;
    virtual const char* what() const noexcept override;
private:
    const char* m_exception_message;
};

class connection_fail : public server_exceptions_base
{
public:
    connection_fail() noexcept;
    explicit connection_fail(const std::string& exception_message);
    explicit connection_fail(const char* exception_message);
    connection_fail(const fail_on_accept& fail_on_accept);

    virtual ~connection_fail() noexcept override;
    virtual const char* what() const noexcept override;
private:
    const char* m_exception_message;
};


#endif //SERVER_SERVER_EXCEPTIONS_H

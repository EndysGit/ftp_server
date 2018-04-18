//
// Created by Gleb Vorfolomeew on 18/09/2017.
//

#ifndef SERVER_TCPSTRAM_H
#define SERVER_TCPSTRAM_H


#include <iostream>
#include <fstream>
#include <array>


class ITCPStream
{
public:
    using buffer_type = std::array<char, 1024>;
    using buffer_size_type = size_t;
    using socket_type = int;
protected:
   // virtual ~ITCPStream() = 0;
    virtual void close() = 0;
    virtual void clear_buffer() noexcept = 0;
    virtual buffer_size_type size() const noexcept = 0;
};


#endif //SERVER_TCPSTRAM_H

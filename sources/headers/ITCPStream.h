//
// Created by Gleb Vorfolomeew on 18/09/2017.
//

#ifndef SERVER_TCPSTRAM_H
#define SERVER_TCPSTRAM_H


#include <iostream>
#include <fstream>
#include <array>
<<<<<<< HEAD

=======
//ftp://speedtest.tele2.net
enum class EBufferSize 
{
    BUFFER       = 1,
    BUFFER_2     = 2, 
    BUFFER_4     = 4, 
    BUFFER_8     = 8,
    BUFFER_32    = 32,
    BUFFER_64    = 64,
    BUFFER_128   = 128,
    BUFFER_256   = 256,
    BUFFER_512   = 512,
    BUFFER_1024  = 1024
};

enum class ETCPStreanState
{
    FREE,
    BUSY 
};

enum class ETCPStreamFlags
{
    LARGE_FILE,
    SMALL_FILE 
}; 

enum class ETCPStreamManip
{
    ASCII,
    BINARY,
    ENDL,

};
>>>>>>> dev

class ITCPStream
{
public:
<<<<<<< HEAD
    using buffer_type = std::array<char, 1024>;
=======
    using buffer_type = std::array<char, static_cast<size_t>(EBufferSize::BUFFER_1024)>;
>>>>>>> dev
    using buffer_size_type = size_t;
    using socket_type = int;
protected:
   // virtual ~ITCPStream() = 0;
    virtual void close() = 0;
    virtual void clear_buffer() noexcept = 0;
    virtual buffer_size_type size() const noexcept = 0;
};


#endif //SERVER_TCPSTRAM_H

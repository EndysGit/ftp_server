//
// Created by Gleb Vorfolomeew on 18/09/2017.
//

#ifndef SERVER_TCPINPUTSTREAM_H
#define SERVER_TCPINPUTSTREAM_H

#include "sources/headers/ITCPStream.h"
#include "sources/headers/Socket.h"
#include <deque>
#include "sources/headers/read_send_functions.h"

class TCPInputStream : public ITCPStream
{
public:
    using input_stream_type = std::ifstream;

    TCPInputStream();
    explicit TCPInputStream(const std::string& file_name);

    ~TCPInputStream() = default;

    TCPInputStream& stream_in(const Socket& socket);
    TCPInputStream& stream_in(int c_socket);

    void open(const std::string& file_name);
    void open(const char* file_name);
    void close() override;
    void clear_buffer() noexcept override;
    buffer_size_type size() const noexcept override;

    // Restricted
    TCPInputStream(const TCPInputStream& in) = delete;
    TCPInputStream(TCPInputStream&& in) = delete;
    TCPInputStream& operator=(const TCPInputStream& out) = delete;
    TCPInputStream& operator=(TCPInputStream&& out) = delete;
    TCPInputStream operator++() = delete;
    TCPInputStream operator++(int) = delete;
    TCPInputStream operator--() = delete;
    TCPInputStream operator--(int) = delete;
private:
    input_stream_type m_stream;
    buffer_type m_buffer;
    std::string m_file_name;
};


#endif //SERVER_TCPINPUTSTREAM_H

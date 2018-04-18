//
// Created by Gleb Vorfolomeew on 18/09/2017.
//

#ifndef SERVER_TCPOUTPUTSTREAM_H
#define SERVER_TCPOUTPUTSTREAM_H

#include "sources/headers/ITCPStream.h"
#include "sources/headers/Socket.h"
#include "sources/headers/read_send_functions.h"

class TCPOutputStream : public ITCPStream
{
public:
    using output_stream_type = std::ofstream;

    TCPOutputStream();
    explicit TCPOutputStream(const std::string& save_folder_path);

    ~TCPOutputStream() = default;

    TCPOutputStream& stream_out(const Socket& socket);
    TCPOutputStream& stream_out(int c_socket);

    void open_dir(const std::string& save_folder_path);
    void opem_dir(const char* save_folder_path);
    void close() override;
    void clear_buffer() noexcept override;

    buffer_size_type size() const noexcept override;

    // Restricted
    TCPOutputStream(const TCPOutputStream& out) = delete;
    TCPOutputStream(TCPOutputStream&& out) = delete;
    TCPOutputStream& operator=(const TCPOutputStream& out) = delete;
    TCPOutputStream& operator=(TCPOutputStream&& out) = delete;
    TCPOutputStream operator++() = delete;
    TCPOutputStream operator++(int) = delete;
    TCPOutputStream operator--() = delete;
    TCPOutputStream operator--(int) = delete;
private:
    output_stream_type m_stream;
    buffer_type m_buffer;
    std::string m_save_folder_path;
};



#endif //SERVER_TCPOUTPUTSTREAM_H

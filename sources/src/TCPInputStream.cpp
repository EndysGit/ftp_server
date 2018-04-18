//
// Created by Gleb Vorfolomeew on 18/09/2017.
//

#include "sources/headers/TCPInputStream.h"

TCPInputStream::TCPInputStream() { m_buffer.fill(0); }

TCPInputStream::TCPInputStream(const std::string& file_name)
{
    m_file_name = file_name;
    if (m_stream.is_open())
    {
        log("TCPInputStream is already opened'\n");
    }
    m_stream.open(file_name, std::ios::binary);
    m_buffer.fill(0);
}


TCPInputStream&
TCPInputStream::stream_in(const Socket& socket)
{
    std::cout << "Send file with name " + m_file_name + '\n';
    send_short_str(socket, m_file_name);

    std::deque<char> file;

    std::copy(std::istreambuf_iterator<char>(m_stream),
              std::istreambuf_iterator<char>(),
              std::back_inserter(file));

    std::cout << "Send " + m_file_name + " which size is " << file.size() << '\n';
    auto file_size = file.size();
    send_file_size(socket, file_size);

    std::cout << "Start to send file\n";
    while (file.size() > 0)
    {
        for (auto &byte_value : m_buffer)
        {
            byte_value = *file.cbegin();
            if (file.size() == 1)
            {
                file.pop_front();
                break;
            }
            file.pop_front();
        }
        send(socket, m_buffer.data(), m_buffer.size(), 0);
        m_buffer.fill(0);
    }

    std::cout << "The file just has been sent'\n";

    return *this;
}

TCPInputStream&
TCPInputStream::stream_in(int c_socket)
{
    std::cout << "Send file with name " + m_file_name << '\n';
    send_short_str(c_socket, m_file_name);

    std::deque<char> file;

    std::copy(std::istreambuf_iterator<char>(m_stream),
              std::istreambuf_iterator<char>(),
              std::back_inserter(file));

    std::cout << "Send " + m_file_name + " which size is " << file.size() << '\n';
    auto file_size = file.size();
    send_file_size(c_socket, file_size);

    std::cout << "Start to send file\n";
    while (file.size() > 0)
    {
        for (auto &byte_value : m_buffer)
        {
            byte_value = *file.cbegin();
            if (file.size() == 1)
            {
                file.pop_front();
                break;
            }
            file.pop_front();
        }
        send(c_socket, m_buffer.data(), m_buffer.size(), 0);
        m_buffer.fill(0);
    }

    std::cout << "The file just has been sent'\n";

    return *this;
}

void
TCPInputStream::open(const std::string& file_path)
{
    this->open(file_path.c_str());
}

void
TCPInputStream::open(const char* file_path)
{
    if (!m_file_name.empty())
    {
        std::string temp_str = parse_path_to_file_name(file_path);
        log("TCPInputStream is already open with " + temp_str);
        return;
    }
    if (m_stream.is_open())
    {
        log("TCPInputStream is already open");
        return;
    }
    m_file_name = parse_path_to_file_name(file_path);
    m_stream.open(file_path, std::ios::binary);
    m_buffer.fill(0);
}

void
TCPInputStream::close()
{
    m_stream.close();
    m_buffer.fill(0);
}

void
TCPInputStream::clear_buffer() noexcept
{
    m_stream.clear();
    m_buffer.fill(0);
}

TCPInputStream::buffer_size_type
TCPInputStream::size() const noexcept
{
    return m_buffer.size();
}

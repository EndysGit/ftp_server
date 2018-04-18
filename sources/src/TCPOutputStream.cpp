//
// Created by Gleb Vorfolomeew on 18/09/2017.
//

#include "sources/headers/TCPOutputStream.h"

TCPOutputStream::TCPOutputStream() { m_buffer.fill(0); }

TCPOutputStream::TCPOutputStream(const std::string& save_folder_path)
        : m_save_folder_path{save_folder_path}
{

}

TCPOutputStream&
TCPOutputStream::stream_out(const Socket& socket)
{
    std::cout << "Start to read file name'\n";
    {
        std::string file_name;
        if (!m_stream.is_open())
        {
            if (read_short_str(static_cast<int>(socket), file_name))
            {
                m_stream.open(m_save_folder_path + file_name, std::ios::binary);
                m_buffer.fill(0);
                std::cout << "File name is " << file_name << '\n';
            }
            else
                log("Fail to constract stream");
        }
    }

    std::cout << "Start to read file size\n";
    auto file_size = read_file_size(socket);
    std::cout << "File size is " << file_size << '\n';

    std::string file;

    auto recive_checker = read(socket, m_buffer.data(), m_buffer.size());

    std::cout << "Start to read file\n";
    while (static_cast<bool>(recive_checker))
    {
        std::copy(m_buffer.cbegin(),
                  m_buffer.cend(),
                  std::back_inserter(file));

        m_buffer.fill(0);

        recive_checker = read(socket,
                              m_buffer.data(),
                              m_buffer.size());
    }

    while (file.size() != file_size)
        file.pop_back();

    std::copy(file.cbegin(), file.cend(), std::ostreambuf_iterator<char>(m_stream));

    std::cout << "The file has been read and saved\n";

    return *this;
}

TCPOutputStream&
TCPOutputStream::stream_out(int c_socket)
{
    std::cout << "Start to read file name'\n";
    {
        std::string file_name;
        if (!m_stream.is_open())
        {
            if (read_short_str(c_socket, file_name))
            {
                m_stream.open(m_save_folder_path + file_name, std::ios::binary);
                m_buffer.fill(0);
                std::cout << "File name is " << file_name << '\n';
            }
            else
                log("Fail to constract stream");
        }
    }

    std::cout << "Start to read file size\n";
    auto file_size = read_file_size(c_socket);
    std::cout << "File size is " << file_size << '\n';

    std::string file;

    auto recive_checker = read(c_socket, m_buffer.data(), m_buffer.size());

    std::cout << "Start to read file\n";
    while (static_cast<bool>(recive_checker))
    {
        std::copy(m_buffer.cbegin(),
                  m_buffer.cend(),
                  std::back_inserter(file));

        m_buffer.fill(0);

        recive_checker = read(c_socket,
                              m_buffer.data(),
                              m_buffer.size());
    }

    while (file.size() != file_size)
        file.pop_back();

    std::copy(file.cbegin(), file.cend(), std::ostreambuf_iterator<char>(m_stream));

    std::cout << "The file has been read and saved\n";

    return *this;
}

void
TCPOutputStream::open_dir(const std::string& save_folder_path)
{
    if (!m_save_folder_path.empty()) {
        log("TCPOutputStream's save folder already seted with" + m_save_folder_path);
        return;
    }
    m_save_folder_path = save_folder_path;
}

void
TCPOutputStream::opem_dir(const char* save_folder_path)
{
    if (!m_save_folder_path.empty())
    {
        log("TCPOutputStream's save folder already seted with" + m_save_folder_path);
        return;
    }
    m_save_folder_path = save_folder_path;
}

void
TCPOutputStream::close()
{
    m_stream.close();
    m_buffer.fill(0);
}

void
TCPOutputStream::clear_buffer() noexcept
{
    m_buffer.fill(0);
}

TCPOutputStream::buffer_size_type
TCPOutputStream::size() const noexcept
{
    return m_buffer.size();
}


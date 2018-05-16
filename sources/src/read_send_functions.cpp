//
// Created by Gleb Vorfolomeew on 19/09/2017.
//

#include "sources/headers/read_send_functions.h"

<<<<<<< HEAD
unsigned long
read_short_str(int c_socket, std::string& result_str)
{
    std::array<char, 64> temp_str;
    temp_str.fill(0);

    auto bytes_read_check = read(c_socket, temp_str.data(), temp_str.size());
    // TODO: exception
    if (bytes_read_check < 0)
        log( "Fail to read from socket");
=======
int64_t
read_short_str(int c_socket, std::string& result_str)
{
    std::array<char, 256> temp_str;
    temp_str.fill(0);

    int64_t bytes_read_check = read(c_socket, temp_str.data(), temp_str.size());
    // TODO: exception
    if (bytes_read_check <= 0)
    {
        log( "Fail to read from socket");
        return 0;
    }
>>>>>>> dev

    for (const auto& value : temp_str)
        result_str.push_back(value);

<<<<<<< HEAD
    while (*(result_str.cend() - 1) == 0)
        result_str.pop_back();
=======
    for (auto el = result_str.rbegin(); el != result_str.rend(); ++el)
        if (*el == 0)
            result_str.pop_back();
        else 
            break;
>>>>>>> dev

    return result_str.size();
}

<<<<<<< HEAD
int
send_short_str(int c_socket, const std::string& str)
{
    if (str.size() > 64)
=======
int64_t 
read_data(int c_socket, std::string& result_str, int64_t timeout)
{
    std::array<char, 1> temp_str;
    
    struct pollfd poll_fd[1];
    int64_t buffer_status;

    poll_fd[0].fd = c_socket;
    poll_fd[0].events = 0;
    poll_fd[0].events = POLLIN;

    while((buffer_status = poll(poll_fd, 1, timeout)) > 0)
    {
        temp_str.fill(0);

        if (read(c_socket, temp_str.data(), temp_str.size()) <= 0)
        {
            log("Fail to read from socket");
            return 0;
        }

        for (const auto& value : temp_str)
                result_str.push_back(value);

        poll_fd[0].fd = c_socket;
        poll_fd[0].events = 0;
        poll_fd[0].events = POLLIN;
    }

    return result_str.size(); 
}

int
send_short_str(int c_socket, const std::string& str)
{
    if (str.size() > 256)
>>>>>>> dev
    {
        log("Fail to send, the string too long. Please pass string that size no longer than 64");
        return -1;
    }
    int resilt = send(c_socket, str.data(), str.size(), 0);
    return resilt;
}

int
read_file_size(int c_socket)
{
    std::string result_str;

    read_short_str(c_socket, result_str);

    auto result_size = std::stoi(result_str);

    return result_size;
}

unsigned long
send_file_size(int c_socket, size_t value)
{
    auto result_size = send(c_socket,
                            std::to_string(value).data(),
                            strlen(std::to_string(value).c_str()),
                            0);
    return result_size;
}

std::string
parse_path_to_file_name(const std::string& path)
{
    const auto file_name_begin = path.find_last_of('/') + 1;
    auto file_name = path.substr(file_name_begin);
    return file_name;
}

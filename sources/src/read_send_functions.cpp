//
// Created by Gleb Vorfolomeew on 19/09/2017.
//

#include "sources/headers/read_send_functions.h"

unsigned long
read_short_str(int c_socket, std::string& result_str)
{
    std::array<char, 64> temp_str;
    temp_str.fill(0);

    auto bytes_read_check = read(c_socket, temp_str.data(), temp_str.size());
    // TODO: exception
    if (bytes_read_check < 0)
        log( "Fail to read from socket");

    for (const auto& value : temp_str)
        result_str.push_back(value);

    while (*(result_str.cend() - 1) == 0)
        result_str.pop_back();

    return result_str.size();
}

int
send_short_str(int c_socket, const std::string& str)
{
    if (str.size() > 64)
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

//
// Created by Gleb Vorfolomeew on 16/09/2017.
//

#include "sources/headers/service_header.h"

void
log(const std::string& log_message, int64_t target_object_id)
// The method responsible for creating log message;
{
    static std::ofstream s_log_file(c_log_file_name);
    static uint64_t s_log_message_number = 0;

    std::stringstream str_stream;

    str_stream << '\n' << s_log_message_number << ". " << log_message ;

    if (target_object_id != 0)
        str_stream << target_object_id;

    str_stream << '\n';

    ++s_log_message_number;

    s_log_file << str_stream.str();
}

void
setupForWindows()
{
#ifdef __WIN32__
    WORD versionWanted = MAKEWORD(1, 1);
   WSADATA wsaData;
   WSAStartup(versionWanted, &wsaData);
#endif
}
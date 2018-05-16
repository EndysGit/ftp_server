//
// Created by Gleb Vorfolomeew on 15/09/2017.
//

#ifndef SERVER_CONSTANTS_H
#define SERVER_CONSTANTS_H

#include <fstream>
#include <sstream>

#ifdef __WIN32__
# include <winsock2.h>
#else
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <sys/poll.h>
#endif

constexpr auto c_IPv4 =                 AF_INET;
constexpr auto c_IPv6 =                 AF_INET6;
constexpr auto c_TCP =                  SOCK_STREAM;
constexpr auto c_UDP =                  SOCK_DGRAM;
constexpr auto c_localhost =            INADDR_ANY;
constexpr auto c_default_protocol =     0;
constexpr auto c_port =                 8080;
const auto c_log_file_name =            "log_file.txt";


// The method responsible for creating log message;
void
log(const std::string& log_message, int64_t target_object_id = 0);

// The method make some setups for windows platform
void
setupForWindows();

#endif //SERVER_CONSTANTS_H

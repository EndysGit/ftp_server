//
// Created by Gleb Vorfolomeew on 19/09/2017.
//

#ifndef SERVER_READ_SEND_FUNCTIONS_H
#define SERVER_READ_SEND_FUNCTIONS_H
#include <iostream>
#include <fstream>
#include <array>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <arpa/inet.h>
#include "sources/headers/service_header.h"

int64_t read_short_str(int c_socket, std::string& result_str);

int64_t read_data(int c_socket, std::string& result_str, int64_t timeout = 500);

int send_short_str(int c_socket, const std::string& str);

int read_file_size(int c_socket);

unsigned long send_file_size(int c_socket, size_t value);

std::string parse_path_to_file_name(const std::string& path);

#endif //SERVER_READ_SEND_FUNCTIONS_H

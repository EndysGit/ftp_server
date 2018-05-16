// Client side C/C++ program to demonstrate Socket programming
#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <unistd.h>
#include <netdb.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>
#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include "sources/headers/TCPInputStream.h"
#include "sources/headers/TCPOutputStream.h"
#include "sources/headers/Client.h"

int main(int argc, char const *argv[])
{
    Client client;
    client.start();
    return 0;
}

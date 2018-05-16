cmake_minimum_required(VERSION 3.8)
project(client)

set(CMAKE_CXX_STANDARD 17)

find_package(Boost COMPONENTS system filesystem REQUIRED)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(SOURCE_FILES
        # Main
        # ----
        sources/src/main.cpp

        # Components
        # ----------
        # server_exception
        sources/src/server_exceptions.cpp
        sources/headers/server_exceptions.h
        # Some service functions and values
        sources/headers/service_header.h
        sources/src/service_header_impl.cpp
        sources/headers/address_geters.h
<<<<<<< HEAD
=======
        sources/src/address_geters.cpp
>>>>>>> dev

        # Socket
        sources/src/Socket.cpp
        sources/headers/Socket.h
        # TCPStream interface
        sources/headers/ITCPStream.h
        # Input TCP stream
        sources/src/TCPInputStream.cpp
        sources/headers/TCPInputStream.h
        # Outut TCP stream
        sources/src/TCPOutputStream.cpp
        sources/headers/TCPOutputStream.h
        sources/headers/read_send_functions.h
        sources/src/read_send_functions.cpp
        sources/src/TCPConnector.cpp
        sources/headers/TCPConnector.h
        sources/src/Client.cpp
        sources/headers/Client.h)

add_executable(client ${SOURCE_FILES})
target_link_libraries(client ${Boost_LIBRARIES})

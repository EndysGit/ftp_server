# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.10.1/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.10.1/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Volumes/Date/ProgrammingProjects/cppFolder/ftp_client

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Volumes/Date/ProgrammingProjects/cppFolder/ftp_client/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/client.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/client.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/client.dir/flags.make

CMakeFiles/client.dir/sources/src/main.cpp.o: CMakeFiles/client.dir/flags.make
CMakeFiles/client.dir/sources/src/main.cpp.o: ../sources/src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Volumes/Date/ProgrammingProjects/cppFolder/ftp_client/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/client.dir/sources/src/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/client.dir/sources/src/main.cpp.o -c /Volumes/Date/ProgrammingProjects/cppFolder/ftp_client/sources/src/main.cpp

CMakeFiles/client.dir/sources/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/client.dir/sources/src/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Volumes/Date/ProgrammingProjects/cppFolder/ftp_client/sources/src/main.cpp > CMakeFiles/client.dir/sources/src/main.cpp.i

CMakeFiles/client.dir/sources/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/client.dir/sources/src/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Volumes/Date/ProgrammingProjects/cppFolder/ftp_client/sources/src/main.cpp -o CMakeFiles/client.dir/sources/src/main.cpp.s

CMakeFiles/client.dir/sources/src/main.cpp.o.requires:

.PHONY : CMakeFiles/client.dir/sources/src/main.cpp.o.requires

CMakeFiles/client.dir/sources/src/main.cpp.o.provides: CMakeFiles/client.dir/sources/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/client.dir/build.make CMakeFiles/client.dir/sources/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/client.dir/sources/src/main.cpp.o.provides

CMakeFiles/client.dir/sources/src/main.cpp.o.provides.build: CMakeFiles/client.dir/sources/src/main.cpp.o


CMakeFiles/client.dir/sources/src/server_exceptions.cpp.o: CMakeFiles/client.dir/flags.make
CMakeFiles/client.dir/sources/src/server_exceptions.cpp.o: ../sources/src/server_exceptions.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Volumes/Date/ProgrammingProjects/cppFolder/ftp_client/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/client.dir/sources/src/server_exceptions.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/client.dir/sources/src/server_exceptions.cpp.o -c /Volumes/Date/ProgrammingProjects/cppFolder/ftp_client/sources/src/server_exceptions.cpp

CMakeFiles/client.dir/sources/src/server_exceptions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/client.dir/sources/src/server_exceptions.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Volumes/Date/ProgrammingProjects/cppFolder/ftp_client/sources/src/server_exceptions.cpp > CMakeFiles/client.dir/sources/src/server_exceptions.cpp.i

CMakeFiles/client.dir/sources/src/server_exceptions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/client.dir/sources/src/server_exceptions.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Volumes/Date/ProgrammingProjects/cppFolder/ftp_client/sources/src/server_exceptions.cpp -o CMakeFiles/client.dir/sources/src/server_exceptions.cpp.s

CMakeFiles/client.dir/sources/src/server_exceptions.cpp.o.requires:

.PHONY : CMakeFiles/client.dir/sources/src/server_exceptions.cpp.o.requires

CMakeFiles/client.dir/sources/src/server_exceptions.cpp.o.provides: CMakeFiles/client.dir/sources/src/server_exceptions.cpp.o.requires
	$(MAKE) -f CMakeFiles/client.dir/build.make CMakeFiles/client.dir/sources/src/server_exceptions.cpp.o.provides.build
.PHONY : CMakeFiles/client.dir/sources/src/server_exceptions.cpp.o.provides

CMakeFiles/client.dir/sources/src/server_exceptions.cpp.o.provides.build: CMakeFiles/client.dir/sources/src/server_exceptions.cpp.o


CMakeFiles/client.dir/sources/src/service_header_impl.cpp.o: CMakeFiles/client.dir/flags.make
CMakeFiles/client.dir/sources/src/service_header_impl.cpp.o: ../sources/src/service_header_impl.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Volumes/Date/ProgrammingProjects/cppFolder/ftp_client/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/client.dir/sources/src/service_header_impl.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/client.dir/sources/src/service_header_impl.cpp.o -c /Volumes/Date/ProgrammingProjects/cppFolder/ftp_client/sources/src/service_header_impl.cpp

CMakeFiles/client.dir/sources/src/service_header_impl.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/client.dir/sources/src/service_header_impl.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Volumes/Date/ProgrammingProjects/cppFolder/ftp_client/sources/src/service_header_impl.cpp > CMakeFiles/client.dir/sources/src/service_header_impl.cpp.i

CMakeFiles/client.dir/sources/src/service_header_impl.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/client.dir/sources/src/service_header_impl.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Volumes/Date/ProgrammingProjects/cppFolder/ftp_client/sources/src/service_header_impl.cpp -o CMakeFiles/client.dir/sources/src/service_header_impl.cpp.s

CMakeFiles/client.dir/sources/src/service_header_impl.cpp.o.requires:

.PHONY : CMakeFiles/client.dir/sources/src/service_header_impl.cpp.o.requires

CMakeFiles/client.dir/sources/src/service_header_impl.cpp.o.provides: CMakeFiles/client.dir/sources/src/service_header_impl.cpp.o.requires
	$(MAKE) -f CMakeFiles/client.dir/build.make CMakeFiles/client.dir/sources/src/service_header_impl.cpp.o.provides.build
.PHONY : CMakeFiles/client.dir/sources/src/service_header_impl.cpp.o.provides

CMakeFiles/client.dir/sources/src/service_header_impl.cpp.o.provides.build: CMakeFiles/client.dir/sources/src/service_header_impl.cpp.o


CMakeFiles/client.dir/sources/src/address_geters.cpp.o: CMakeFiles/client.dir/flags.make
CMakeFiles/client.dir/sources/src/address_geters.cpp.o: ../sources/src/address_geters.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Volumes/Date/ProgrammingProjects/cppFolder/ftp_client/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/client.dir/sources/src/address_geters.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/client.dir/sources/src/address_geters.cpp.o -c /Volumes/Date/ProgrammingProjects/cppFolder/ftp_client/sources/src/address_geters.cpp

CMakeFiles/client.dir/sources/src/address_geters.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/client.dir/sources/src/address_geters.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Volumes/Date/ProgrammingProjects/cppFolder/ftp_client/sources/src/address_geters.cpp > CMakeFiles/client.dir/sources/src/address_geters.cpp.i

CMakeFiles/client.dir/sources/src/address_geters.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/client.dir/sources/src/address_geters.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Volumes/Date/ProgrammingProjects/cppFolder/ftp_client/sources/src/address_geters.cpp -o CMakeFiles/client.dir/sources/src/address_geters.cpp.s

CMakeFiles/client.dir/sources/src/address_geters.cpp.o.requires:

.PHONY : CMakeFiles/client.dir/sources/src/address_geters.cpp.o.requires

CMakeFiles/client.dir/sources/src/address_geters.cpp.o.provides: CMakeFiles/client.dir/sources/src/address_geters.cpp.o.requires
	$(MAKE) -f CMakeFiles/client.dir/build.make CMakeFiles/client.dir/sources/src/address_geters.cpp.o.provides.build
.PHONY : CMakeFiles/client.dir/sources/src/address_geters.cpp.o.provides

CMakeFiles/client.dir/sources/src/address_geters.cpp.o.provides.build: CMakeFiles/client.dir/sources/src/address_geters.cpp.o


CMakeFiles/client.dir/sources/src/Socket.cpp.o: CMakeFiles/client.dir/flags.make
CMakeFiles/client.dir/sources/src/Socket.cpp.o: ../sources/src/Socket.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Volumes/Date/ProgrammingProjects/cppFolder/ftp_client/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/client.dir/sources/src/Socket.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/client.dir/sources/src/Socket.cpp.o -c /Volumes/Date/ProgrammingProjects/cppFolder/ftp_client/sources/src/Socket.cpp

CMakeFiles/client.dir/sources/src/Socket.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/client.dir/sources/src/Socket.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Volumes/Date/ProgrammingProjects/cppFolder/ftp_client/sources/src/Socket.cpp > CMakeFiles/client.dir/sources/src/Socket.cpp.i

CMakeFiles/client.dir/sources/src/Socket.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/client.dir/sources/src/Socket.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Volumes/Date/ProgrammingProjects/cppFolder/ftp_client/sources/src/Socket.cpp -o CMakeFiles/client.dir/sources/src/Socket.cpp.s

CMakeFiles/client.dir/sources/src/Socket.cpp.o.requires:

.PHONY : CMakeFiles/client.dir/sources/src/Socket.cpp.o.requires

CMakeFiles/client.dir/sources/src/Socket.cpp.o.provides: CMakeFiles/client.dir/sources/src/Socket.cpp.o.requires
	$(MAKE) -f CMakeFiles/client.dir/build.make CMakeFiles/client.dir/sources/src/Socket.cpp.o.provides.build
.PHONY : CMakeFiles/client.dir/sources/src/Socket.cpp.o.provides

CMakeFiles/client.dir/sources/src/Socket.cpp.o.provides.build: CMakeFiles/client.dir/sources/src/Socket.cpp.o


CMakeFiles/client.dir/sources/src/TCPInputStream.cpp.o: CMakeFiles/client.dir/flags.make
CMakeFiles/client.dir/sources/src/TCPInputStream.cpp.o: ../sources/src/TCPInputStream.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Volumes/Date/ProgrammingProjects/cppFolder/ftp_client/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/client.dir/sources/src/TCPInputStream.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/client.dir/sources/src/TCPInputStream.cpp.o -c /Volumes/Date/ProgrammingProjects/cppFolder/ftp_client/sources/src/TCPInputStream.cpp

CMakeFiles/client.dir/sources/src/TCPInputStream.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/client.dir/sources/src/TCPInputStream.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Volumes/Date/ProgrammingProjects/cppFolder/ftp_client/sources/src/TCPInputStream.cpp > CMakeFiles/client.dir/sources/src/TCPInputStream.cpp.i

CMakeFiles/client.dir/sources/src/TCPInputStream.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/client.dir/sources/src/TCPInputStream.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Volumes/Date/ProgrammingProjects/cppFolder/ftp_client/sources/src/TCPInputStream.cpp -o CMakeFiles/client.dir/sources/src/TCPInputStream.cpp.s

CMakeFiles/client.dir/sources/src/TCPInputStream.cpp.o.requires:

.PHONY : CMakeFiles/client.dir/sources/src/TCPInputStream.cpp.o.requires

CMakeFiles/client.dir/sources/src/TCPInputStream.cpp.o.provides: CMakeFiles/client.dir/sources/src/TCPInputStream.cpp.o.requires
	$(MAKE) -f CMakeFiles/client.dir/build.make CMakeFiles/client.dir/sources/src/TCPInputStream.cpp.o.provides.build
.PHONY : CMakeFiles/client.dir/sources/src/TCPInputStream.cpp.o.provides

CMakeFiles/client.dir/sources/src/TCPInputStream.cpp.o.provides.build: CMakeFiles/client.dir/sources/src/TCPInputStream.cpp.o


CMakeFiles/client.dir/sources/src/TCPOutputStream.cpp.o: CMakeFiles/client.dir/flags.make
CMakeFiles/client.dir/sources/src/TCPOutputStream.cpp.o: ../sources/src/TCPOutputStream.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Volumes/Date/ProgrammingProjects/cppFolder/ftp_client/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/client.dir/sources/src/TCPOutputStream.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/client.dir/sources/src/TCPOutputStream.cpp.o -c /Volumes/Date/ProgrammingProjects/cppFolder/ftp_client/sources/src/TCPOutputStream.cpp

CMakeFiles/client.dir/sources/src/TCPOutputStream.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/client.dir/sources/src/TCPOutputStream.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Volumes/Date/ProgrammingProjects/cppFolder/ftp_client/sources/src/TCPOutputStream.cpp > CMakeFiles/client.dir/sources/src/TCPOutputStream.cpp.i

CMakeFiles/client.dir/sources/src/TCPOutputStream.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/client.dir/sources/src/TCPOutputStream.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Volumes/Date/ProgrammingProjects/cppFolder/ftp_client/sources/src/TCPOutputStream.cpp -o CMakeFiles/client.dir/sources/src/TCPOutputStream.cpp.s

CMakeFiles/client.dir/sources/src/TCPOutputStream.cpp.o.requires:

.PHONY : CMakeFiles/client.dir/sources/src/TCPOutputStream.cpp.o.requires

CMakeFiles/client.dir/sources/src/TCPOutputStream.cpp.o.provides: CMakeFiles/client.dir/sources/src/TCPOutputStream.cpp.o.requires
	$(MAKE) -f CMakeFiles/client.dir/build.make CMakeFiles/client.dir/sources/src/TCPOutputStream.cpp.o.provides.build
.PHONY : CMakeFiles/client.dir/sources/src/TCPOutputStream.cpp.o.provides

CMakeFiles/client.dir/sources/src/TCPOutputStream.cpp.o.provides.build: CMakeFiles/client.dir/sources/src/TCPOutputStream.cpp.o


CMakeFiles/client.dir/sources/src/read_send_functions.cpp.o: CMakeFiles/client.dir/flags.make
CMakeFiles/client.dir/sources/src/read_send_functions.cpp.o: ../sources/src/read_send_functions.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Volumes/Date/ProgrammingProjects/cppFolder/ftp_client/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/client.dir/sources/src/read_send_functions.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/client.dir/sources/src/read_send_functions.cpp.o -c /Volumes/Date/ProgrammingProjects/cppFolder/ftp_client/sources/src/read_send_functions.cpp

CMakeFiles/client.dir/sources/src/read_send_functions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/client.dir/sources/src/read_send_functions.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Volumes/Date/ProgrammingProjects/cppFolder/ftp_client/sources/src/read_send_functions.cpp > CMakeFiles/client.dir/sources/src/read_send_functions.cpp.i

CMakeFiles/client.dir/sources/src/read_send_functions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/client.dir/sources/src/read_send_functions.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Volumes/Date/ProgrammingProjects/cppFolder/ftp_client/sources/src/read_send_functions.cpp -o CMakeFiles/client.dir/sources/src/read_send_functions.cpp.s

CMakeFiles/client.dir/sources/src/read_send_functions.cpp.o.requires:

.PHONY : CMakeFiles/client.dir/sources/src/read_send_functions.cpp.o.requires

CMakeFiles/client.dir/sources/src/read_send_functions.cpp.o.provides: CMakeFiles/client.dir/sources/src/read_send_functions.cpp.o.requires
	$(MAKE) -f CMakeFiles/client.dir/build.make CMakeFiles/client.dir/sources/src/read_send_functions.cpp.o.provides.build
.PHONY : CMakeFiles/client.dir/sources/src/read_send_functions.cpp.o.provides

CMakeFiles/client.dir/sources/src/read_send_functions.cpp.o.provides.build: CMakeFiles/client.dir/sources/src/read_send_functions.cpp.o


CMakeFiles/client.dir/sources/src/TCPConnector.cpp.o: CMakeFiles/client.dir/flags.make
CMakeFiles/client.dir/sources/src/TCPConnector.cpp.o: ../sources/src/TCPConnector.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Volumes/Date/ProgrammingProjects/cppFolder/ftp_client/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/client.dir/sources/src/TCPConnector.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/client.dir/sources/src/TCPConnector.cpp.o -c /Volumes/Date/ProgrammingProjects/cppFolder/ftp_client/sources/src/TCPConnector.cpp

CMakeFiles/client.dir/sources/src/TCPConnector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/client.dir/sources/src/TCPConnector.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Volumes/Date/ProgrammingProjects/cppFolder/ftp_client/sources/src/TCPConnector.cpp > CMakeFiles/client.dir/sources/src/TCPConnector.cpp.i

CMakeFiles/client.dir/sources/src/TCPConnector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/client.dir/sources/src/TCPConnector.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Volumes/Date/ProgrammingProjects/cppFolder/ftp_client/sources/src/TCPConnector.cpp -o CMakeFiles/client.dir/sources/src/TCPConnector.cpp.s

CMakeFiles/client.dir/sources/src/TCPConnector.cpp.o.requires:

.PHONY : CMakeFiles/client.dir/sources/src/TCPConnector.cpp.o.requires

CMakeFiles/client.dir/sources/src/TCPConnector.cpp.o.provides: CMakeFiles/client.dir/sources/src/TCPConnector.cpp.o.requires
	$(MAKE) -f CMakeFiles/client.dir/build.make CMakeFiles/client.dir/sources/src/TCPConnector.cpp.o.provides.build
.PHONY : CMakeFiles/client.dir/sources/src/TCPConnector.cpp.o.provides

CMakeFiles/client.dir/sources/src/TCPConnector.cpp.o.provides.build: CMakeFiles/client.dir/sources/src/TCPConnector.cpp.o


CMakeFiles/client.dir/sources/src/Client.cpp.o: CMakeFiles/client.dir/flags.make
CMakeFiles/client.dir/sources/src/Client.cpp.o: ../sources/src/Client.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Volumes/Date/ProgrammingProjects/cppFolder/ftp_client/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/client.dir/sources/src/Client.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/client.dir/sources/src/Client.cpp.o -c /Volumes/Date/ProgrammingProjects/cppFolder/ftp_client/sources/src/Client.cpp

CMakeFiles/client.dir/sources/src/Client.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/client.dir/sources/src/Client.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Volumes/Date/ProgrammingProjects/cppFolder/ftp_client/sources/src/Client.cpp > CMakeFiles/client.dir/sources/src/Client.cpp.i

CMakeFiles/client.dir/sources/src/Client.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/client.dir/sources/src/Client.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Volumes/Date/ProgrammingProjects/cppFolder/ftp_client/sources/src/Client.cpp -o CMakeFiles/client.dir/sources/src/Client.cpp.s

CMakeFiles/client.dir/sources/src/Client.cpp.o.requires:

.PHONY : CMakeFiles/client.dir/sources/src/Client.cpp.o.requires

CMakeFiles/client.dir/sources/src/Client.cpp.o.provides: CMakeFiles/client.dir/sources/src/Client.cpp.o.requires
	$(MAKE) -f CMakeFiles/client.dir/build.make CMakeFiles/client.dir/sources/src/Client.cpp.o.provides.build
.PHONY : CMakeFiles/client.dir/sources/src/Client.cpp.o.provides

CMakeFiles/client.dir/sources/src/Client.cpp.o.provides.build: CMakeFiles/client.dir/sources/src/Client.cpp.o


# Object files for target client
client_OBJECTS = \
"CMakeFiles/client.dir/sources/src/main.cpp.o" \
"CMakeFiles/client.dir/sources/src/server_exceptions.cpp.o" \
"CMakeFiles/client.dir/sources/src/service_header_impl.cpp.o" \
"CMakeFiles/client.dir/sources/src/address_geters.cpp.o" \
"CMakeFiles/client.dir/sources/src/Socket.cpp.o" \
"CMakeFiles/client.dir/sources/src/TCPInputStream.cpp.o" \
"CMakeFiles/client.dir/sources/src/TCPOutputStream.cpp.o" \
"CMakeFiles/client.dir/sources/src/read_send_functions.cpp.o" \
"CMakeFiles/client.dir/sources/src/TCPConnector.cpp.o" \
"CMakeFiles/client.dir/sources/src/Client.cpp.o"

# External object files for target client
client_EXTERNAL_OBJECTS =

client: CMakeFiles/client.dir/sources/src/main.cpp.o
client: CMakeFiles/client.dir/sources/src/server_exceptions.cpp.o
client: CMakeFiles/client.dir/sources/src/service_header_impl.cpp.o
client: CMakeFiles/client.dir/sources/src/address_geters.cpp.o
client: CMakeFiles/client.dir/sources/src/Socket.cpp.o
client: CMakeFiles/client.dir/sources/src/TCPInputStream.cpp.o
client: CMakeFiles/client.dir/sources/src/TCPOutputStream.cpp.o
client: CMakeFiles/client.dir/sources/src/read_send_functions.cpp.o
client: CMakeFiles/client.dir/sources/src/TCPConnector.cpp.o
client: CMakeFiles/client.dir/sources/src/Client.cpp.o
client: CMakeFiles/client.dir/build.make
client: /usr/local/lib/libboost_system-mt.dylib
client: /usr/local/lib/libboost_filesystem-mt.dylib
client: CMakeFiles/client.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Volumes/Date/ProgrammingProjects/cppFolder/ftp_client/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX executable client"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/client.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/client.dir/build: client

.PHONY : CMakeFiles/client.dir/build

CMakeFiles/client.dir/requires: CMakeFiles/client.dir/sources/src/main.cpp.o.requires
CMakeFiles/client.dir/requires: CMakeFiles/client.dir/sources/src/server_exceptions.cpp.o.requires
CMakeFiles/client.dir/requires: CMakeFiles/client.dir/sources/src/service_header_impl.cpp.o.requires
CMakeFiles/client.dir/requires: CMakeFiles/client.dir/sources/src/address_geters.cpp.o.requires
CMakeFiles/client.dir/requires: CMakeFiles/client.dir/sources/src/Socket.cpp.o.requires
CMakeFiles/client.dir/requires: CMakeFiles/client.dir/sources/src/TCPInputStream.cpp.o.requires
CMakeFiles/client.dir/requires: CMakeFiles/client.dir/sources/src/TCPOutputStream.cpp.o.requires
CMakeFiles/client.dir/requires: CMakeFiles/client.dir/sources/src/read_send_functions.cpp.o.requires
CMakeFiles/client.dir/requires: CMakeFiles/client.dir/sources/src/TCPConnector.cpp.o.requires
CMakeFiles/client.dir/requires: CMakeFiles/client.dir/sources/src/Client.cpp.o.requires

.PHONY : CMakeFiles/client.dir/requires

CMakeFiles/client.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/client.dir/cmake_clean.cmake
.PHONY : CMakeFiles/client.dir/clean

CMakeFiles/client.dir/depend:
	cd /Volumes/Date/ProgrammingProjects/cppFolder/ftp_client/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Volumes/Date/ProgrammingProjects/cppFolder/ftp_client /Volumes/Date/ProgrammingProjects/cppFolder/ftp_client /Volumes/Date/ProgrammingProjects/cppFolder/ftp_client/cmake-build-debug /Volumes/Date/ProgrammingProjects/cppFolder/ftp_client/cmake-build-debug /Volumes/Date/ProgrammingProjects/cppFolder/ftp_client/cmake-build-debug/CMakeFiles/client.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/client.dir/depend


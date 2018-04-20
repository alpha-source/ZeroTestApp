cmake_minimum_required(VERSION 3.0)

set(CMAKE_CXX_STANDARD 11)

project(zero)

# this one is important
SET(CMAKE_SYSTEM_NAME Linux)
#this one not so much
SET(SYSTEM_VERSION_MJ  0)
SET(SYSTEM_VERSION_MI  0)
SET(SYSTEM_VERSION_BLD 1)

# specify the cross compiler
#SET(CMAKE_C_COMPILER /opt/petalinux/2017.4/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-gcc )
#SET(CMAKE_CXX_COMPILER /opt/petalinux/2017.4/sysroots/x86_64-petalinux-linux/usr/bin/aarch64-xilinx-linux/aarch64-xilinx-linux-g++ )
# where is the target environment
#SET(CMAKE_FIND_ROOT_PATH /opt/petalinux/2017.4/sysroots/aarch64-xilinx-linux)

# search for programs in the build host directories
SET(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
# for libraries and headers in the target directories
SET(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
SET(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)

add_subdirectory(client)
add_subdirectory(server)
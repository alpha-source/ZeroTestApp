cmake_minimum_required(VERSION 3.3)

project(serverx)

list(
        APPEND HEADER_FILES
        DmaData.h
        DmaMasterApp.h
        Socket.h
)

list(
        APPEND SOURCE_FILES
        main.cpp
        DmaMasterApp.cpp
        DmaData.cpp
        Socket.cpp
)

set(ALL_SOURCE_FILES ${HEADER_FILES} ${SOURCE_FILES})

source_group("" FILES ${ALL_SOURCE_FILES})

add_executable(${PROJECT_NAME} ${ALL_SOURCE_FILES})

set_target_properties(${PROJECT_NAME} PROPERTIES COMPILE_FLAGS "-Wall -Werror -Wno-unknown-pragmas")

target_include_directories(${PROJECT_NAME} SYSTEM PRIVATE ${PROJECT_SOURCE_DIR}/..)

target_link_libraries(${PROJECT_NAME} zmq)

install(TARGETS ${PROJECT_NAME} RUNTIME DESTINATION sbin)
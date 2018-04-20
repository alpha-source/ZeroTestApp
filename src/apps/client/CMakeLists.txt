cmake_minimum_required(VERSION 3.3)

project(client)

list(
        APPEND HEADER_FILES
)

list(
        APPEND SOURCE_FILES
        main.cpp
)

set(ALL_SOURCE_FILES ${HEADER_FILES} ${SOURCE_FILES})

source_group("" FILES ${ALL_SOURCE_FILES})

add_executable(${PROJECT_NAME} ${ALL_SOURCE_FILES})

set_target_properties(${PROJECT_NAME} PROPERTIES COMPILE_FLAGS "-Wall -Werror -Wno-unknown-pragmas")

target_include_directories(${PROJECT_NAME} SYSTEM PRIVATE ${PROJECT_SOURCE_DIR}/..)

target_link_libraries(${PROJECT_NAME} zmq)

install(TARGETS ${PROJECT_NAME} RUNTIME DESTINATION sbin)
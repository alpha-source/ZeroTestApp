cmake_minimum_required(VERSION 3.3)

set(CMAKE_XCODE_ORGANIZATIONNAME "Bowers & Wilkins")

project(server)

list(
        APPEND HEADER_FILES

)

list(
        APPEND SOURCE_FILES
        main.cpp

)

set(ALL_SOURCE_FILES ${HEADER_FILES} ${SOURCE_FILES})
add_library(${PROJECT_NAME} STATIC ${ALL_SOURCE_FILES})



install(
        DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/"
        DESTINATION lib
        FILES_MATCHING PATTERN "*${CMAKE_${PLATFORM_LIBRARY_TYPE}_LIBRARY_SUFFIX}"
        PATTERN "CMakeFiles" EXCLUDE
)

install(
        DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/"
        DESTINATION include/
        FILES_MATCHING PATTERN "*.hpp"
        PATTERN "CMakeFiles" EXCLUDE
)

install(
        DIRECTORY "${PROJECT_SOURCE_DIR}/"
        DESTINATION include/crc
        FILES_MATCHING PATTERN "*.hpp"
        PATTERN "CMakeFiles" EXCLUDE
)

set_target_properties(${PROJECT_NAME} PROPERTIES COMPILE_FLAGS "-Wall -Werror -Wno-unknown-pragmas")
set_target_properties(${PROJECT_NAME} PROPERTIES CXX_STANDARD 11)

target_include_directories(${PROJECT_NAME} SYSTEM PUBLIC ${PROJECT_SOURCE_DIR})
target_include_directories(${PROJECT_NAME} SYSTEM PUBLIC ${CMAKE_CURRENT_BINARY_DIR})
target_include_directories(${PROJECT_NAME} SYSTEM PUBLIC ${CMAKE_CURRENT_LIST_DIR})
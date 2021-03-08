set (CMAKE_EXPORT_COMPILE_COMMANDS 1)
set (CMAKE_CXX_STANDARD 17)
set (CMAKE_BUILD_TYPE Debug)
set( MAKE_CXX_FLAGS "-g -Werror -Wold-style-cast -Wpedantic" )

cmake_minimum_required (VERSION 2.8.11)
project (Rendering)

    
set(SOURCES
    ./src/main.cpp)

set(DIRS
    ./src)

add_executable(Rendering ${SOURCES})

find_package(SDL2 REQUIRED)

if(SDL2_FOUND)
    include_directories(${SDL2_INCLUDE_DIR})
    include_directories(${DIRS})
    target_link_libraries(RPG SDL2)    
    message("\n found SDL2")
else()
    message("\n could not find SDL2")
endif()

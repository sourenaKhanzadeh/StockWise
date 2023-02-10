cmake_minimum_required(VERSION 3.10)
project(Stockwise)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the source files
set(SOURCES
    src/main.cpp
    src/inventory.cpp
)

# Add the header files
set(HEADERS
    include/inventory.hpp
)

# Create the executable
add_executable(Stockwise ${SOURCES} ${HEADERS})

# Include the header files
target_include_directories(Stockwise PUBLIC include)


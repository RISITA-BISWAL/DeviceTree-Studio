cmake_minimum_required(VERSION 3.16)

project(DeviceTreeStudio
    VERSION 0.1.0
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(dtstudio
    src/main.cpp
    src/cli/cli.cpp
)

target_include_directories(dtstudio
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)

cmake_minimum_required(VERSION 3.20)
project(MyApp)

# Find fmt installed via vcpkg
find_package(fmt CONFIG REQUIRED)

add_executable(MyApp main.cpp)

# Link fmt to your executable
target_link_libraries(MyApp PRIVATE fmt::fmt)

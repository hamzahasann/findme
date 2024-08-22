cmake_minimum_required(VERSION 3.14)
project(YourProjectName)

# Specify C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add SFML library
add_subdirectory(libs)

# Add your application
add_subdirectory(apps)

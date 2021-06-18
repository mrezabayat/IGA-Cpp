# requirements
cmake_minimum_required(VERSION 3.16)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# set project name
project(IGACpp VERSION 0.0)

# add executable
add_executable(${PROJECT_NAME} main.cpp)

# add BSpline subdirectory
add_subdirectory(BSpline)
add_subdirectory(Common)

# linking BSpline library
target_link_libraries(${PROJECT_NAME} PUBLIC BSpline
                                             Common)
target_include_directories(${PROJECT_NAME} PUBLIC "${PROJECT_SOURCE_DIR}/BSpline"
                                                  "${PROJECT_SOURCE_DIR}/Common"
                                                  "${PROJECT_BINARY_DIR}")

# configuring config.h file
configure_file(config.h.in config.h)

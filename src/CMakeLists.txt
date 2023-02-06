cmake_minimum_required(VERSION 3.24)
project(spedition_company)

set(CMAKE_CXX_STANDARD 14)

set(Headers graph.h node.h)

add_executable(spedition_company ${PROJECT_SOURCE_DIR}/ spedition_routes.cpp graph.cpp node.cpp)
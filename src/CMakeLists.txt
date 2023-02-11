cmake_minimum_required(VERSION 3.24)
project(logistics_routes)

set(CMAKE_CXX_STANDARD 17)

set(Headers graph.h node.h args_parser.h strings.h input_output_parser.h)

add_executable(spedition_company ${PROJECT_SOURCE_DIR}/ logistics_routes.cpp graph.cpp args_parser.cpp input_output_parser.cpp node.h)
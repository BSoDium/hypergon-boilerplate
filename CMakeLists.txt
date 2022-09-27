cmake_minimum_required(VERSION 3.15)

project(hypergon-example
    VERSION 0.1.0 
    DESCRIPTION "Example project for Hypergon"
)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(libs)

add_executable(${PROJECT_NAME})

target_sources(${PROJECT_NAME} 
  PRIVATE
    src/main.cpp
)

target_link_libraries(${PROJECT_NAME} PRIVATE hypergon)
cmake_minimum_required(VERSION 3.5)
project(vulkan_thing_application VERSION 0.0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(external/vulkan-engine)

add_executable(${PROJECT_NAME} src/main.cpp)

target_link_libraries(${PROJECT_NAME} vulkan_thing_engine)
target_include_directories(${PROJECT_NAME} PRIVATE vulkan_thing_engine)
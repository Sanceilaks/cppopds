cmake_minimum_required (VERSION 3.8)

add_executable (testapp "main.cpp")
set_property(TARGET testapp PROPERTY CXX_STANDARD 20)

target_include_directories(testapp PUBLIC ${PROJECT_SOURCE_DIR}/cppopds)
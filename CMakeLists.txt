cmake_minimum_required(VERSION 3.10)

project(imba_project LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

add_executable(project
    src/model.cpp
    src/user.cpp
    src/pupil.cpp
    src/main.cpp
    src/teacher.cpp
    src/admin.cpp
)

include_directories(include)
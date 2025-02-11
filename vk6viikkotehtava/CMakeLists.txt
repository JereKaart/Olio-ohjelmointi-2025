cmake_minimum_required(VERSION 3.16)

project(vk6viikkotehtava LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(vk6viikkotehtava main.cpp
    students.h students.cpp)

include(GNUInstallDirs)
install(TARGETS vk6viikkotehtava
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

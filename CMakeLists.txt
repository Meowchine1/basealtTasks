cmake_minimum_required(VERSION 3.14)

project(basealtTest LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(HEADERS
    randomArrayGeneration.h graph.h tasks.h squaregrid.h)
set(MAIN tasks.cpp main.cpp randomArrayGeneration.cpp graph.cpp squaregrid.cpp)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(basealtTest
   ${MAIN} ${HEADERS}
)
target_link_libraries(basealtTest Qt${QT_VERSION_MAJOR}::Core)

install(TARGETS basealtTest
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

cmake_minimum_required(VERSION 3.10)
project(CarSimulator)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(CarSimulator
    main.cpp
    source/Car.cpp
    source/MonsterTruck.cpp
    source/Room.cpp
)

target_include_directories(CarSimulator PRIVATE headers)

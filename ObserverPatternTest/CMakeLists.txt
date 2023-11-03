cmake_minimum_required(VERSION 3.26)
project(ObserverPatternTest)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ObserverPatternTest
        concreteobserver.cpp
        concretesubject.cpp
        ObserverPatternTest.cpp
        subject.cpp
)

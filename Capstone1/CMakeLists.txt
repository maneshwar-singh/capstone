cmake_minimum_required(VERSION 3.10)
project(Capstone1)

set(CMAKE_CXX_STANDARD 14)

add_executable(Capstone1 main.cpp src/util/complex.cpp src/util/complex.h src/domain/Person.cpp src/domain/Person.h src/domain/Student.cpp src/domain/Student.h src/domain/Employee.cpp src/domain/Employee.h src/stack/Cell.cpp src/stack/Cell.h src/stack/Stack.cpp src/stack/Stack.h src/queue/Cell.cpp src/queue/Cell.h src/queue/Queue.cpp src/queue/Queue.h)
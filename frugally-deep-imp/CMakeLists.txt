cmake_minimum_required(VERSION 3.22)
project(FrugallyDeep)

set(CMAKE_CXX_STANDARD 17)

# Find OpenCV
find_package(OpenCV REQUIRED)

# Include directories for both OpenCV and the header files
include_directories(${OpenCV_INCLUDE_DIRS} lib/include)

add_executable(FrugallyDeep main.cpp
        lib/src/Model.cpp
        lib/include/Model.h
        lib/include/Model.h)

# Link libraries
target_link_libraries(FrugallyDeep ${OpenCV_LIBS})
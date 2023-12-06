cmake_minimum_required(VERSION 3.22)
project(neural-network-project)

# Include submodules

# The Jupyter notebook does not have a CMakeLists, it is meant to be run separately
#add_subdirectory(create-model)

# the two C++ directories
add_subdirectory(augment-images)
add_subdirectory(frugally-deep-imp)
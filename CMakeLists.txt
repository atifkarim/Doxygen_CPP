cmake_minimum_required(VERSION 3.10)
project(do_math)

# Set the main target name to the project name, can be changed if needed.
set(MAIN_TARGET_NAME ${PROJECT_NAME})

include_directories(${PROJECT_SOURCE_DIR}/include)

# Create the C++ shared library
add_library(${MAIN_TARGET_NAME}_lib SHARED ${${PROJECT_NAME}_SOURCE_DIR}/src/math.cpp)

# Target for the firmware example program
add_executable(${MAIN_TARGET_NAME}_executable ${${PROJECT_NAME}_SOURCE_DIR}/example/main.cpp)

# Set the name of the binary file and the output directory
set_target_properties(${MAIN_TARGET_NAME}_executable PROPERTIES OUTPUT_NAME "main")
set_target_properties(${MAIN_TARGET_NAME}_executable PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${${PROJECT_NAME}_SOURCE_DIR}/bin)
set_target_properties(${MAIN_TARGET_NAME}_executable PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${${PROJECT_NAME}_SOURCE_DIR}/bin)
set_target_properties(${MAIN_TARGET_NAME}_executable PROPERTIES ARCHIVE_OUTPUT_DIRECTORY ${${PROJECT_NAME}_SOURCE_DIR}/bin)

# Set the name of the lib and the output directory
set_target_properties(${MAIN_TARGET_NAME}_lib PROPERTIES RELEASE_OUTPUT_NAME "do_math")
set_target_properties(${MAIN_TARGET_NAME}_lib PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${${PROJECT_NAME}_SOURCE_DIR}/lib)
set_target_properties(${MAIN_TARGET_NAME}_lib PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${${PROJECT_NAME}_SOURCE_DIR}/lib)
set_target_properties(${MAIN_TARGET_NAME}_lib PROPERTIES ARCHIVE_OUTPUT_DIRECTORY ${${PROJECT_NAME}_SOURCE_DIR}/lib)

# Link the firmware target to library
target_link_libraries(${MAIN_TARGET_NAME}_executable ${MAIN_TARGET_NAME}_lib)
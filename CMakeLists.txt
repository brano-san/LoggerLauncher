cmake_minimum_required (VERSION 3.8)
project ("LoggerLauncher" CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/build/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/build)
set(CMAKE_OBJECT_PATH ${CMAKE_SOURCE_DIR}/build/obj)

file(GLOB_RECURSE LAUNCHER_HEADER_FILES ${CMAKE_CURRENT_LIST_DIR}/src/*.hpp)
file(GLOB_RECURSE LAUNCHER_SOURCE_FILES ${CMAKE_CURRENT_LIST_DIR}/src/*.cpp)
add_executable (${PROJECT_NAME} ${LAUNCHER_HEADER_FILES} ${LAUNCHER_SOURCE_FILES})

message(STATUS "Output dir - ${CMAKE_SOURCE_DIR}/build/bin")
set_target_properties(${PROJECT_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/build/bin/${PROJECT_NAME}_$<CONFIG>"
)

add_subdirectory("${CMAKE_CURRENT_LIST_DIR}/third_party/Logger")
target_link_libraries(${PROJECT_NAME} PRIVATE Logger)
target_include_directories(${PROJECT_NAME} PRIVATE "${CMAKE_CURRENT_LIST_DIR}/third_party")

add_subdirectory("${CMAKE_CURRENT_LIST_DIR}/third_party/GenEnum")
target_link_libraries(${PROJECT_NAME} PRIVATE GenEnum)
target_include_directories(${PROJECT_NAME} PRIVATE "${CMAKE_CURRENT_LIST_DIR}/third_party")

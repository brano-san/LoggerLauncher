cmake_minimum_required (VERSION 3.8)
project ("LoggerLauncher" CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

file(GLOB_RECURSE LAUNCHER_HEADER_FILES ${CMAKE_CURRENT_LIST_DIR}/src/*.hpp)
file(GLOB_RECURSE LAUNCHER_SOURCE_FILES ${CMAKE_CURRENT_LIST_DIR}/src/*.cpp)
add_executable (${PROJECT_NAME} ${LAUNCHER_HEADER_FILES} ${LAUNCHER_SOURCE_FILES})

add_subdirectory("${CMAKE_CURRENT_LIST_DIR}/third_party/Logger")
target_link_libraries(${PROJECT_NAME} PRIVATE Logger)
target_include_directories(${PROJECT_NAME} PRIVATE "${CMAKE_CURRENT_LIST_DIR}/third_party")

add_subdirectory("${CMAKE_CURRENT_LIST_DIR}/third_party/GenEnum")
target_link_libraries(${PROJECT_NAME} PRIVATE GenEnum)
target_include_directories(${PROJECT_NAME} PRIVATE "${CMAKE_CURRENT_LIST_DIR}/third_party")
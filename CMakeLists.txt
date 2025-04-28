cmake_minimum_required (VERSION 3.8)

project ("LoggerLauncher")

file(GLOB_RECURSE HEADER_FILES ${CMAKE_CURRENT_LIST_DIR}/src/*.hpp)
file(GLOB_RECURSE SOURCE_FILES ${CMAKE_CURRENT_LIST_DIR}/src/*.cpp)
add_executable (${PROJECT_NAME} ${HEADER_FILES} ${SOURCE_FILES})

add_subdirectory("${CMAKE_CURRENT_LIST_DIR}/third_party/Logger")
target_link_libraries(${PROJECT_NAME} PRIVATE Logger)

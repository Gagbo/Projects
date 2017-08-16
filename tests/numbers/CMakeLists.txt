project(test_P_numbers)

include_directories(${CMAKE_SOURCE_DIR}/tests)
include_directories(${CMAKE_SOURCE_DIR}/src/numbers)

# Sources
file(GLOB ${PROJECT_NAME}_SOURCES [a-zA-Z0-9]*.cpp)
# Headers
file(GLOB ${PROJECT_NAME}_HEADERS [a-zA-Z0-9]*.h)

if(BUILD_SHARED_LIBS)
    set(LIBRARY_TYPE SHARED)
else()
    set(LIBRARY_TYPE STATIC)
endif(BUILD_SHARED_LIBS)

add_executable(${PROJECT_NAME} ${${PROJECT_NAME}_SOURCES}
    ${${PROJECT_NAME}HEADERS} ${TESTS_MAIN} ${TESTS_HEADERS})
target_link_libraries(${PROJECT_NAME} P_numbers)

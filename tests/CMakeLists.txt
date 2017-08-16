project(Projects_tests)

# Framework files
file(GLOB TESTS_HEADERS [a-zA-Z0-9]*.hpp)
file(GLOB TESTS_MAIN tests-main.cpp)

if(BUILD_NUMBERS)
    add_subdirectory(numbers)
endif(BUILD_NUMBERS)

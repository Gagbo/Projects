# Meta-project CMakeLists.txt

# This is the main CMake file of Projects

cmake_minimum_required(VERSION 3.8.2)


project(Projects)

# Build targets
option(BUILD_TESTS      "Build unit tests"                       true)
option(BUILD_NUMBERS    "Build numbers examples"                 true)
option(BUILD_ALGORITHMS "Build classic algorithms"               false)
option(BUILD_GRAPH      "Build graph examples"                   false)
option(BUILD_DATASTRUCT "Build data structures"                  false)
option(BUILD_TEXT       "Build text examples"                    false)
option(BUILD_NETWORK    "Build networking examples"              false)
option(BUILD_CLASSES    "Build classes examples"                 false)
option(BUILD_THREADING  "Build threading examples"               false)
option(BUILD_WEB        "Build web examples"                     false)
option(BUILD_FILES      "Build files examples"                   false)
option(BUILD_DATABASE   "Build data bases"                       false)
option(BUILD_MULTIMEDIA "Build Graphics and multimedia examples" false)
option(BUILD_SECURITY   "Build security examples"                false)

# Libraries options
option(BUILD_SHARED_LIBS "Build shared libraries" true)

# Compiler flags
add_compile_options("-Wall")
add_compile_options("-pedantic")
add_compile_options("-Wextra")

# Advanced options
mark_as_advanced(BUILD_SHARED_LBS)

# List the targets to make
add_subdirectory(src)
if(BUILD_TESTS)
    add_subdirectory(tests)
endif(BUILD_TESTS)

project(P_numbers)

# Sources
file(GLOB ${PROJECT_NAME}_SOURCES [a-zA-Z0-9]*.cpp)

# Headers
file(GLOB ${PROJECT_NAME}_HEADERS [a-zA-Z0-9]*.h)

if(BUILD_SHARED_LIBS)
    set(LIBRARY_TYPE SHARED)
else()
    set(LIBRARY_TYPE STATIC)
endif(BUILD_SHARED_LIBS)

add_library(${PROJECT_NAME} ${LIBRARY_TYPE} ${${PROJECT_NAME}_SOURCES} ${${PROJECT_NAME}_HEADERS})

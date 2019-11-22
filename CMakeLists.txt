cmake_minimum_required(VERSION 3.15)
project(test)

enable_language(CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
set(CMAKE_INCLUDE_CURRENT_DIR ON)


include_directories(src/)
link_directories(res/)

##find_library(PERSONLIB libperson)
add_library(libperson
        SHARED
        res/libperson.so
        src/libperson_api.h
)

set_target_properties(libperson
        PROPERTIES LINKER_LANGUAGE C
        PUBLIC_HEADER src/libperson_api.h
    )


target_include_directories(libperson PRIVATE
        res/libperson.so
        src/libperson_api.h
        .
)



add_executable(test
        main.cpp
        )

target_link_libraries(test libperson)
#target_include_directories(libperson PRIVATE src/)

install(TARGETS libperson
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
        PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
    )
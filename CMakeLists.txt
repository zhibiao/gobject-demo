cmake_minimum_required(VERSION 3.0.0)
project(gobject-example VERSION 0.1.0)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GST REQUIRED gobject-2.0 )

include_directories(${GST_INCLUDE_DIRS})
link_directories(${GST_LIBRARY_DIRS})

add_executable(${PROJECT_NAME} main.c my-animal.c my-animal.h my-cat.c my-cat.h)

target_link_libraries(${PROJECT_NAME} PRIVATE ${GST_LINK_LIBRARIES})

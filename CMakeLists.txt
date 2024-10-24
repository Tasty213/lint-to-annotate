cmake_minimum_required(VERSION 3.28)

project(LintToAnnotate)

find_package(fmt CONFIG REQUIRED)
find_package(Boost COMPONENTS program_options REQUIRED)

include_directories(${Boost_INCLUDE_DIRS})

add_subdirectory(src/)
add_executable(LintToAnnotate src/lint_to_annotate.cpp)
target_link_libraries(LintToAnnotate PRIVATE fmt::fmt Boost::program_options options_lib)
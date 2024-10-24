cmake_minimum_required(VERSION 3.28)

project(LintToAnnotate)

find_package(fmt CONFIG REQUIRED)

add_executable(LintToAnnotate lint_to_annotate.cpp)

target_link_libraries(LintToAnnotate PRIVATE fmt::fmt)
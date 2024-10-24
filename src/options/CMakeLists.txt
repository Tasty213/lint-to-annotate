set(SOURCE_FILES options.cpp)
add_library(options_lib ${SOURCE_FILES})

target_include_directories(options_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(options_lib Boost::program_options)

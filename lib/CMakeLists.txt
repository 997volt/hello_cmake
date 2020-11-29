add_library(
    say-hello 
    say-hello/hello.h 
    say-hello/hello.c
)

target_include_directories(say-hello PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")

target_compile_definitions(say-hello PRIVATE SAY_HELLO_VERSION=1.0)
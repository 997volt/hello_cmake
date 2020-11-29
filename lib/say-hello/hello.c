#include "hello.h"
#include <stdio.h>

void say_hello()
{
    printf("Hello CMake from Library in subdirectory\n");
    printf("say-hello library version = %.1f", SAY_HELLO_VERSION);
}
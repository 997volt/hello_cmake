#include "hello.h"
#include <stdio.h>

int  hello::say_hello()
{
    printf("Hello CMake in C\n");
    int user_number;
    scanf("%d", &user_number);
    return user_number;
}
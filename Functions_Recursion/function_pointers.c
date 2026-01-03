// Demonstrates function pointers in C
#include <stdio.h>

void hello()
{
    printf("Hello from function pointer!\n");
}

int main()
{
    void (*funcPtr)() = hello;
    funcPtr();
    return 0;
}

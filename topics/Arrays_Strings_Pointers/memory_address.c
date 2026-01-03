// Demonstrates memory address in C
#include <stdio.h>

int main()
{
    int x = 42;
    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", (void *)&x);
    return 0;
}

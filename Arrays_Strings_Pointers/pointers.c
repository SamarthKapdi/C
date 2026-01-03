// Demonstrates pointers in C
#include <stdio.h>

int main()
{
    int a = 10;
    int *p = &a;
    printf("Value of a: %d\n", a);
    printf("Pointer p points to address: %p\n", (void *)p);
    printf("Value at address p: %d\n", *p);
    return 0;
}

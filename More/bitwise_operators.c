// Demonstrates bitwise operators in C
#include <stdio.h>

int main()
{
    int a = 6, b = 3;
    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("a ^ b = %d\n", a ^ b);
    printf("~a = %d\n", ~a);
    printf("b << 1 = %d\n", b << 1);
    printf("a >> 1 = %d\n", a >> 1);
    return 0;
}

// Demonstrates macros in C
#include <stdio.h>
#define SQUARE(x) ((x) * (x))

int main()
{
    int n = 5;
    printf("Square of %d: %d\n", n, SQUARE(n));
    return 0;
}

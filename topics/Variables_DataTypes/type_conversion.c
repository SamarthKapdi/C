// Demonstrates type conversion in C
#include <stdio.h>

int main()
{
    int i = 10;
    double d = (double)i;
    printf("Integer: %d, Converted to double: %.2lf\n", i, d);
    double x = 5.7;
    int y = (int)x;
    printf("Double: %.2lf, Converted to int: %d\n", x, y);
    return 0;
}

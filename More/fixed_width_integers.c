// Demonstrates fixed-width integers in C
#include <stdio.h>
#include <stdint.h>

int main()
{
    int8_t a = 100;
    int16_t b = 20000;
    int32_t c = 1000000000;
    printf("int8_t: %d, int16_t: %d, int32_t: %d\n", a, b, c);
    return 0;
}

// Demonstrates enums, macros, and bitwise operators in C
#include <stdio.h>

#define SQUARE(x) ((x) * (x))

enum Day
{
    SUN,
    MON,
    TUE,
    WED,
    THU,
    FRI,
    SAT
};

int main()
{
    // Enum usage
    enum Day today = WED;
    printf("Day number: %d\n", today);

    // Macro usage
    int num = 6;
    printf("Square of %d: %d\n", num, SQUARE(num));

    // Bitwise operators
    int a = 5, b = 3;
    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("a ^ b = %d\n", a ^ b);
    printf("~a = %d\n", ~a);
    printf("b << 1 = %d\n", b << 1);
    printf("a >> 1 = %d\n", a >> 1);

    return 0;
}

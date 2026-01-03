// operators_expressions.c
// Demonstrates operators and expressions in C
#include <stdio.h>

int main()
{
    int a = 10, b = 3;
    int sum = a + b;
    int diff = a - b;
    int prod = a * b;
    int quot = a / b;
    int rem = a % b;
    int isEqual = (a == b);
    int isGreater = (a > b);

    printf("a = %d, b = %d\n", a, b);
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", prod);
    printf("Quotient: %d\n", quot);
    printf("Remainder: %d\n", rem);
    printf("a == b: %d\n", isEqual);
    printf("a > b: %d\n", isGreater);
    return 0;
}

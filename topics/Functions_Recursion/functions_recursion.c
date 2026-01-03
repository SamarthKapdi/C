// Demonstrates functions and recursion in C
#include <stdio.h>

double square(double n);
int factorial(int n);

int main()
{
    double num = 4.0;
    printf("Square of %.1f = %.1f\n", num, square(num));

    int n = 5;
    printf("Factorial of %d = %d\n", n, factorial(n));
    return 0;
}

double square(double n)
{
    return n * n;
}

int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

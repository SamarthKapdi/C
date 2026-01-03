// Demonstrates storage classes in C
#include <stdio.h>

void func();

int main()
{
    auto int a = 10;
    register int b = 20;
    static int c = 30;
    printf("auto: %d, register: %d, static: %d\n", a, b, c);
    func();
    return 0;
}

void func()
{
    static int count = 0;
    count++;
    printf("Static variable in function: %d\n", count);
}

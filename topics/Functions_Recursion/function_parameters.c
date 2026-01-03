// Demonstrates function parameters in C
#include <stdio.h>

void greet(char name[]);

int main()
{
    greet("Alice");
    return 0;
}

void greet(char name[])
{
    printf("Hello, %s!\n", name);
}

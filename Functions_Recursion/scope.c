// Demonstrates variable scope in C
#include <stdio.h>

void show();
int x = 10; // global variable

int main()
{
    int x = 20; // local variable
    printf("Local x: %d\n", x);
    show();
    return 0;
}

void show()
{
    printf("Global x: %d\n", x);
}

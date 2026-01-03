// Demonstrates struct padding in C
#include <stdio.h>

struct Example
{
    char a;
    int b;
    char c;
};

int main()
{
    struct Example ex;
    printf("Size of struct Example: %zu bytes\n", sizeof(ex));
    return 0;
}

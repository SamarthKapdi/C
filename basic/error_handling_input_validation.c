// error_handling_input_validation.c
// Demonstrates error handling and input validation in C
#include <stdio.h>

int main()
{
    int num;
    printf("Enter a positive integer: ");
    if (scanf("%d", &num) != 1)
    {
        printf("Invalid input!\n");
        return 1;
    }
    if (num <= 0)
    {
        printf("Number must be positive!\n");
        return 1;
    }
    printf("You entered: %d\n", num);
    return 0;
}

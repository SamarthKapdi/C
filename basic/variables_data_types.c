// variables_data_types.c
// Demonstrates variables and data types in C
#include <stdio.h>

int main()
{
    int age = 20;
    float height = 5.9f;
    char grade = 'A';
    double pi = 3.14159;

    printf("Age: %d\n", age);
    printf("Height: %.1f\n", height);
    printf("Grade: %c\n", grade);
    printf("Value of Pi: %.5lf\n", pi);
    return 0;
}

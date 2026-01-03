// Demonstrates arrays, strings, and pointers in C
#include <stdio.h>

int main()
{
    // Array
    int arr[5] = {1, 2, 3, 4, 5};
    printf("Array elements: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // String
    char str[] = "Hello";
    printf("String: %s\n", str);

    // Pointer
    int x = 10;
    int *ptr = &x;
    printf("Value of x: %d, Address of x: %p\n", x, (void *)ptr);
    printf("Value via pointer: %d\n", *ptr);

    return 0;
}

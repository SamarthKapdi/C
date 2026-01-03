// Demonstrates structs and pointers in C
#include <stdio.h>

struct Point
{
    int x, y;
};

int main()
{
    struct Point p = {3, 4};
    struct Point *ptr = &p;
    printf("Point: (%d, %d)\n", ptr->x, ptr->y);
    return 0;
}

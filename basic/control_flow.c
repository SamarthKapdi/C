// control_flow.c
// Demonstrates if-else, switch, and loops in C
#include <stdio.h>

int main()
{
    int num = 5;
    // if-else
    if (num % 2 == 0)
    {
        printf("%d is even\n", num);
    }
    else
    {
        printf("%d is odd\n", num);
    }

    // switch
    char grade = 'B';
    switch (grade)
    {
    case 'A':
        printf("Excellent!\n");
        break;
    case 'B':
        printf("Well done!\n");
        break;
    case 'C':
        printf("Good!\n");
        break;
    default:
        printf("Invalid grade\n");
    }

    // for loop
    printf("Counting 1 to 5: ");
    for (int i = 1; i <= 5; i++)
    {
        printf("%d ", i);
    }
    printf("\n");

    // while loop
    int count = 3;
    printf("While loop countdown: ");
    while (count > 0)
    {
        printf("%d ", count);
        count--;
    }
    printf("\n");

    // do-while loop
    int x = 1;
    printf("Do-while loop: ");
    do
    {
        printf("%d ", x);
        x++;
    } while (x <= 3);
    printf("\n");

    return 0;
}

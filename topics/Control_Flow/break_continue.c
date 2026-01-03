// Demonstrates break and continue in loops
#include <stdio.h>

int main()
{
    printf("Break example: ");
    for (int i = 1; i <= 5; i++)
    {
        if (i == 4)
            break;
        printf("%d ", i);
    }
    printf("\nContinue example: ");
    for (int i = 1; i <= 5; i++)
    {
        if (i == 3)
            continue;
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}

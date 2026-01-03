// Simple calculator program in C
#include <stdio.h>

int main()
{
    double num1, num2, result;
    char op;
    printf("Enter an expression (e.g., 2 + 3): ");
    if (scanf("%lf %c %lf", &num1, &op, &num2) != 3)
    {
        printf("Invalid input!\n");
        return 1;
    }
    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 == 0)
        {
            printf("Error: Division by zero!\n");
            return 1;
        }
        result = num1 / num2;
        break;
    default:
        printf("Unknown operator!\n");
        return 1;
    }
    printf("Result: %.2lf\n", result);
    return 0;
}

#include <stdio.h>

int main()
{
    int num1, num2;
    char op;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op); // space before %c to consume newline

    switch (op)
    {
    case '+':
        printf("Result = %d\n", num1 + num2);
        break;
    case '-':
        printf("Result = %d\n", num1 - num2);
        break;
    case '*':
        printf("Result = %d\n", num1 * num2);
        break;
    case '/':
        if (num2 != 0)
            printf("Result = %d\n", num1 / num2);
        else
            printf("Error! Division by zero.\n");
        break;
    case '%':
        if (num2 != 0)
            printf("Result = %d\n", num1 % num2);
        else
            printf("Error! Division by zero.\n");
        break;
    default:
        printf("Invalid operator!\n");
    }

    return 0;
}

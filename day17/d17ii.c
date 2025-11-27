#include <stdio.h>

int main()
{
    int num, i, flag = 0;

    // Input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle special cases
    if (num <= 1)
    {
        printf("%d is Not a Prime number.\n", num);
        return 0;
    }

    // Check divisibility
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            flag = 1; // found a divisor
            break;
        }
    }

    // Output result
    if (flag == 0)
    {
        printf("%d is a Prime number.\n", num);
    }
    else
    {
        printf("%d is Not a Prime number.\n", num);
    }

    return 0;
}

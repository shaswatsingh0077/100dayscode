#include <stdio.h>

// Function to calculate factorial of a digit
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int num, original, digit, sum = 0;

    // Input
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Calculate sum of factorials of digits
    while (num > 0)
    {
        digit = num % 10;        // extract last digit
        sum += factorial(digit); // add factorial of digit
        num = num / 10;          // remove last digit
    }

    // Check if Strong Number
    if (sum == original)
    {
        printf("%d is a Strong number.\n", original);
    }
    else
    {
        printf("%d is Not a Strong number.\n", original);
    }

    return 0;
}

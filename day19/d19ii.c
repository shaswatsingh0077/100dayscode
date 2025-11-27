#include <stdio.h>

int main()
{
    int num, sum = 0, digit;

    // Input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Loop to extract digits and add them
    while (num > 0)
    {
        digit = num % 10; // get last digit
        sum += digit;     // add to sum
        num = num / 10;   // remove last digit
    }

    // Output
    printf("Sum of digits = %d\n", sum);

    return 0;
}

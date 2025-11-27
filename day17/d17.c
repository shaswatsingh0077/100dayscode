#include <stdio.h>
#include <math.h>

int main()
{
    int num, original, digits = 0, sum = 0, temp, digit;

    // Input
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num; // store the original number
    temp = num;

    // Count digits
    while (temp > 0)
    {
        digits++;
        temp = temp / 10;
    }

    temp = num; // reset temp

    // Calculate sum of digits^digits
    while (temp > 0)
    {
        digit = temp % 10;              // extract last digit
        sum += (int)pow(digit, digits); // raise to power and add
        temp = temp / 10;               // remove last digit
    }

    // Compare
    if (sum == original)
    {
        printf("%d is an Armstrong number.\n", original);
    }
    else
    {
        printf("%d is Not an Armstrong number.\n", original);
    }

    return 0;
}

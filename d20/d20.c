#include <stdio.h>

int main()
{
    int num, digit;
    int product = 1; // start with 1 for multiplication
    int hasOdd = 0;  // flag to check if odd digit exists

    // Input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Loop through digits
    while (num > 0)
    {
        digit = num % 10; // extract last digit
        if (digit % 2 != 0)
        {                     // check if odd
            product *= digit; // multiply
            hasOdd = 1;       // mark that odd digit found
        }
        num = num / 10; // remove last digit
    }

    // Output
    if (hasOdd)
    {
        printf("Product of odd digits = %d\n", product);
    }
    else
    {
        printf("No odd digits found. Product = 0\n");
    }

    return 0;
}

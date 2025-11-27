#include <stdio.h>

int main()
{
    int num, original, rev = 0, digit;

    // Input
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num; // store the original number

    // Reverse the number using a loop
    while (num > 0)
    {
        digit = num % 10;       // extract last digit
        rev = rev * 10 + digit; // build reversed number
        num = num / 10;         // remove last digit
    }

    // Compare reversed with original
    if (original == rev)
    {
        printf("%d is a Palindrome.\n", original);
    }
    else
    {
        printf("%d is Not a Palindrome.\n", original);
    }

    return 0;
}

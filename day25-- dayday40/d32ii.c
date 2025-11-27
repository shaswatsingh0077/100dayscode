#include <stdio.h>

int main()
{
    long long num;
    int freq[10] = {0}; // frequency array for digits 0-9
    int digit, i, maxDigit, maxCount = 0;

    // Input number
    printf("Enter an integer number: ");
    scanf("%lld", &num);

    // Count digit frequencies
    while (num > 0)
    {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    // Find digit with maximum frequency
    for (i = 0; i < 10; i++)
    {
        if (freq[i] > maxCount)
        {
            maxCount = freq[i];
            maxDigit = i;
        }
    }

    // Output result
    printf("Digit %d occurs the most times (%d times).\n", maxDigit, maxCount);

    return 0;
}

#include <stdio.h>

int main()
{
    int a, b, i, hcf;

    // Input
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Find HCF by checking factors
    for (i = 1; i <= (a < b ? a : b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i; // update largest common factor
        }
    }

    printf("HCF of %d and %d is %d\n", a, b, hcf);
    return 0;
}

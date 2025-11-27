#include <stdio.h>

int main()
{
    int a, b, x, y, temp;

    // Input
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    // Find HCF using Euclidean algorithm
    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }

    // a now contains HCF
    int hcf = a;

    // Calculate LCM
    int lcm = (x * y) / hcf;

    printf("LCM of %d and %d is %d\n", x, y, lcm);

    return 0;
}

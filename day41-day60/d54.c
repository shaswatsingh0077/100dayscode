#include <stdio.h>

int main()
{
    int n, x;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    int total = n * (n + 1) / 2; // sum from 1 to n

    for (x = 1; x <= n; x++)
    {
        int leftSum = x * (x + 1) / 2;          // sum from 1 to x
        int rightSum = total - (x - 1) * x / 2; // sum from x to n
        if (leftSum == rightSum)
        {
            printf("Pivot integer: %d\n", x);
            return 0;
        }
    }

    printf("-1\n"); // no pivot found
    return 0;
}

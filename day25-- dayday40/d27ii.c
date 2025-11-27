#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, j, flag;

    // Input upper limit
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    // Loop through numbers from 2 to n
    for (i = 2; i <= n; i++)
    {
        flag = 1; // assume prime

        // Check divisibility up to sqrt(i)
        for (j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                flag = 0; // not prime
                break;
            }
        }

        // If still prime, print it
        if (flag == 1)
        {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}

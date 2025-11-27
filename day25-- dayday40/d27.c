#include <stdio.h>

int main()
{
    int i, j;

    // Upper pyramid (1 to 9 stars, odd numbers)
    for (i = 1; i <= 9; i += 2)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Lower pyramid (7 down to 1 stars, odd numbers)
    for (i = 7; i >= 1; i -= 2)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

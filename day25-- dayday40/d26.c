#include <stdio.h>

int main()
{
    int i, j;

    // Outer loop for rows
    for (i = 1; i <= 5; i++)
    {
        // Print spaces before numbers
        for (j = 1; j <= 5 - i; j++)
        {
            printf(" ");
        }
        // Print numbers starting from (6 - i) up to 5
        for (j = 6 - i; j <= 5; j++)
        {
            printf("%d", j);
        }
        printf("\n"); // Move to next line
    }

    return 0;
}

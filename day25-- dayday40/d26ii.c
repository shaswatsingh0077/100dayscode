#include <stdio.h>

int main()
{
    int i, j;
    int stars[] = {1, 3, 5, 3, 1}; // star counts per line
    int n = sizeof(stars) / sizeof(stars[0]);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < stars[i]; j++)
        {
            printf("*");
        }
        printf("\n"); // move to next line
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int num, i;

    // Input
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);

    // Loop through all numbers from 1 to num
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d ", i); // print factor
        }
    }

    printf("\n");
    return 0;
}

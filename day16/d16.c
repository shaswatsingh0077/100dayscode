#include <stdio.h>

int main()
{
    int num, binary[32], i = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("Binary = 0\n");
        return 0;
    }

    while (num > 0)
    {
        binary[i] = num % 2; // store remainder
        num = num / 2;       // divide by 2
        i++;
    }

    printf("Binary = ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]); // print in reverse
    }
    printf("\n");

    return 0;
}

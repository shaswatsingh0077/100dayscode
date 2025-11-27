#include <stdio.h>
#include <string.h>

int main()
{
    char binary[100];

    // Input
    printf("Enter a binary number: ");
    scanf("%s", binary);

    // Compute 1's complement
    for (int i = 0; i < strlen(binary); i++)
    {
        if (binary[i] == '0')
            binary[i] = '1';
        else if (binary[i] == '1')
            binary[i] = '0';
        else
        {
            printf("Invalid binary digit encountered!\n");
            return 0;
        }
    }

    // Output
    printf("1's Complement = %s\n", binary);

    return 0;
}

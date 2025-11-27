#include <stdio.h>

int main()
{
    char str[200];
    int i;
    int seen[26] = {0}; // track lowercase alphabets

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Traverse string
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            int index = str[i] - 'a';
            if (seen[index] == 1)
            {
                printf("First repeating lowercase alphabet: %c\n", str[i]);
                return 0;
            }
            else
            {
                seen[index] = 1;
            }
        }
    }

    printf("No repeating lowercase alphabet found.\n");
    return 0;
}

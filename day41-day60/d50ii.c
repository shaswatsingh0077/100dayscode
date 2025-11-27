#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, j, k, length;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    str[strcspn(str, "\n")] = '\0';

    length = strlen(str);

    printf("All substrings are:\n");

    // Generate substrings
    for (i = 0; i < length; i++)
    {
        for (j = i; j < length; j++)
        {
            for (k = i; k <= j; k++)
            {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}

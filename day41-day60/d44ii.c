#include <stdio.h>

int main()
{
    char str[200];
    int i;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // safer than gets()

    // Replace spaces with hyphens
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            str[i] = '-';
        }
    }

    // Output result
    printf("Modified string: %s\n", str);

    return 0;
}

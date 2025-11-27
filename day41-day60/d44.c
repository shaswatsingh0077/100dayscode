#include <stdio.h>
#include <ctype.h> // for isdigit(), isalpha()

int main()
{
    char str[200];
    int i, spaces = 0, digits = 0, specials = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // safer than gets()

    // Traverse string
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            spaces++;
        }
        else if (isdigit(str[i]))
        {
            digits++;
        }
        else if (!isalpha(str[i]) && str[i] != '\n')
        {
            specials++;
        }
    }

    // Output result
    printf("Number of spaces = %d\n", spaces);
    printf("Number of digits = %d\n", digits);
    printf("Number of special characters = %d\n", specials);

    return 0;
}

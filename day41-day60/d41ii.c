#include <stdio.h>

int main()
{
    char str[100];
    int i;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // safer than gets()

    // Print each character on a new line
    printf("Characters in the string:\n");
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != '\n')
        { // ignore newline added by fgets
            printf("%c\n", str[i]);
        }
    }

    return 0;
}

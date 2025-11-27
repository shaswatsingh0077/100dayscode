#include <stdio.h>

int main()
{
    char str[100];
    int i, j, temp;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // safer than gets()

    // Find length manually
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }

    // Adjust length if newline is included by fgets
    if (length > 0 && str[length - 1] == '\n')
    {
        str[length - 1] = '\0';
        length--;
    }

    // Reverse string
    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    // Output result
    printf("Reversed string: %s\n", str);

    return 0;
}

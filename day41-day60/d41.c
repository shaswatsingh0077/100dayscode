#include <stdio.h>

int main()
{
    char str[100];
    int i, count = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // safer than gets()

    // Count characters manually
    for (i = 0; str[i] != '\0'; i++)
    {
        count++;
    }

    // Adjust count if newline is included by fgets
    if (count > 0 && str[count - 1] == '\n')
    {
        count--;
    }

    // Output result
    printf("Number of characters in the string = %d\n", count);

    return 0;
}

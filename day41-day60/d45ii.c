#include <stdio.h>

int main()
{
    char str[200];
    int i;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // safer than gets()

    // Toggle case
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32; // convert to lowercase
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32; // convert to uppercase
        }
    }

    // Output result
    printf("Toggled case string: %s\n", str);

    return 0;
}

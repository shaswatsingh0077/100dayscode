#include <stdio.h>

int main()
{
    char str[200];
    int i, j = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // safer than gets()

    // Remove vowels
    for (i = 0; str[i] != '\0'; i++)
    {
        if (!(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
              str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'))
        {
            str[j++] = str[i]; // keep only non-vowels
        }
    }
    str[j] = '\0'; // terminate new string

    // Output result
    printf("String without vowels: %s\n", str);

    return 0;
}

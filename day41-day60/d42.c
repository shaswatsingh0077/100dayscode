#include <stdio.h>
#include <ctype.h> // for isalpha() and tolower()

int main()
{
    char str[200];
    int i, vowels = 0, consonants = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // safer than gets()

    // Traverse string
    for (i = 0; str[i] != '\0'; i++)
    {
        if (isalpha(str[i]))
        {                              // check if alphabet
            char ch = tolower(str[i]); // convert to lowercase
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    // Output result
    printf("Number of vowels = %d\n", vowels);
    printf("Number of consonants = %d\n", consonants);

    return 0;
}

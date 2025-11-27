#include <stdio.h>
#include <ctype.h> // for isalpha(), tolower()

int main()
{
    FILE *fp;
    char filename[100];
    char ch;
    int vowels = 0, consonants = 0;

    // Input filename
    printf("Enter filename: ");
    scanf("%s", filename);

    // Open file in read mode
    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    // Read file character by character
    while ((ch = fgetc(fp)) != EOF)
    {
        if (isalpha(ch))
        {                     // Only process alphabetic characters
            ch = tolower(ch); // Normalize to lowercase
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    fclose(fp);

    // Output result
    printf("Total vowels: %d\n", vowels);
    printf("Total consonants: %d\n", consonants);

    return 0;
}

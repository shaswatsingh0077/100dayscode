#include <stdio.h>
#include <string.h>

int main()
{
    char str[200], longest[200], current[200];
    int i, j = 0, maxLen = 0, currentLen = 0;

    // Input sentence
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    str[strcspn(str, "\n")] = '\0';

    // Traverse string
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            current[j++] = str[i];
            currentLen++;
        }
        else
        {
            current[j] = '\0';
            if (currentLen > maxLen)
            {
                strcpy(longest, current);
                maxLen = currentLen;
            }
            j = 0;
            currentLen = 0;
        }
    }

    // Check last word
    current[j] = '\0';
    if (currentLen > maxLen)
    {
        strcpy(longest, current);
        maxLen = currentLen;
    }

    // Output result
    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}

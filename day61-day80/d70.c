#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[200];
    int i;

    // Input string
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    // Remove newline if present
    s[strcspn(s, "\n")] = '\0';

    // Convert entire string to lowercase
    for (i = 0; s[i] != '\0'; i++)
    {
        s[i] = tolower(s[i]);
    }

    // Capitalize first character if string is not empty
    if (strlen(s) > 0)
    {
        s[0] = toupper(s[0]);
    }

    // Output result
    printf("Sentence case: %s\n", s);

    return 0;
}

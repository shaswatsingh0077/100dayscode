#include <stdio.h>
#include <string.h>

int main()
{
    char s[200];
    int lastIndex[256]; // ASCII character map
    int i, start = 0, maxLen = 0;

    // Input string
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    // Remove newline if present
    s[strcspn(s, "\n")] = '\0';

    int n = strlen(s);

    // Initialize lastIndex array
    for (i = 0; i < 256; i++)
    {
        lastIndex[i] = -1;
    }

    // Sliding window
    for (i = 0; i < n; i++)
    {
        if (lastIndex[(unsigned char)s[i]] >= start)
        {
            start = lastIndex[(unsigned char)s[i]] + 1;
        }
        lastIndex[(unsigned char)s[i]] = i;
        if (i - start + 1 > maxLen)
        {
            maxLen = i - start + 1;
        }
    }

    // Output result
    printf("Length of longest substring without repeating characters: %d\n", maxLen);

    return 0;
}

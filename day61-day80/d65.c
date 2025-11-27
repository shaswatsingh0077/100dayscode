#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], t[100];
    int freq[26] = {0};
    int i;

    // Input strings
    printf("Enter first string: ");
    scanf("%s", s);
    printf("Enter second string: ");
    scanf("%s", t);

    // Check length
    if (strlen(s) != strlen(t))
    {
        printf("Not Anagram\n");
        return 0;
    }

    // Count frequencies
    for (i = 0; s[i] != '\0'; i++)
    {
        freq[s[i] - 'a']++;
    }
    for (i = 0; t[i] != '\0'; i++)
    {
        freq[t[i] - 'a']--;
    }

    // Verify all counts are zero
    for (i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
        {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}

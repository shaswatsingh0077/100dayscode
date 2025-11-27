#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define CHAR_COUNT 256 // Total possible characters (ASCII)

// Function to check if two strings are anagrams
bool areAnagrams(char str1[], char str2[])
{
    // If lengths are different, they cannot be anagrams
    if (strlen(str1) != strlen(str2))
    {
        return false;
    }

    // Create a frequency array to count characters
    int count[CHAR_COUNT] = {0};

    // Increment and decrement counts for each character in both strings
    for (int i = 0; str1[i] && str2[i]; i++)
    {
        count[(int)str1[i]]++;
        count[(int)str2[i]]--;
    }

    // Check if all counts are zero
    for (int i = 0; i < CHAR_COUNT; i++)
    {
        if (count[i] != 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    if (areAnagrams(str1, str2))
    {
        printf("The strings are anagrams of each other.\n");
    }
    else
    {
        printf("The strings are NOT anagrams of each other.\n");
    }

    return 0;
}

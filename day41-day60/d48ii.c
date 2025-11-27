#include <stdio.h>
#include <string.h>

void reverseWord(char str[], int start, int end)
{
    char temp;
    while (start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    char str[200];
    int i, start = 0;

    // Input sentence
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    str[strcspn(str, "\n")] = '\0';

    // Traverse string and reverse each word
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            reverseWord(str, start, i - 1);
            start = i + 1;
        }
    }
    // Reverse last word
    reverseWord(str, start, i - 1);

    // Output result
    printf("Sentence with each word reversed:\n%s\n", str);

    return 0;
}

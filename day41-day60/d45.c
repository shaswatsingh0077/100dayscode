#include <stdio.h>

int main()
{
    char str[200], ch;
    int i, count = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // safer than gets()

    // Input character to search
    printf("Enter a character to count: ");
    scanf("%c", &ch);

    // Count frequency
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            count++;
        }
    }

    // Output result
    printf("Frequency of '%c' = %d\n", ch, count);

    return 0;
}

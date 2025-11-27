#include <stdio.h>

int main()
{
    char str[100];
    int i, j, length = 0, flag = 1;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // safer than gets()

    // Find length manually
    while (str[length] != '\0')
    {
        length++;
    }

    // Adjust length if newline is included by fgets
    if (length > 0 && str[length - 1] == '\n')
    {
        str[length - 1] = '\0';
        length--;
    }

    // Check palindrome
    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        if (str[i] != str[j])
        {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}

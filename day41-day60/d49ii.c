#include <stdio.h>
#include <string.h>

int main()
{
    char name[200];
    int i, length;

    // Input full name
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline if present
    name[strcspn(name, "\n")] = '\0';
    length = strlen(name);

    printf("Formatted Name: ");

    // Print first initial
    if (name[0] != ' ')
        printf("%c.", name[0]);

    // Traverse string
    for (i = 0; i < length; i++)
    {
        if (name[i] == ' ' && name[i + 1] != '\0' && name[i + 1] != ' ')
        {
            // Check if this is the last word (surname)
            int j = i + 1;
            int spaceFound = 0;
            while (j < length)
            {
                if (name[j] == ' ')
                {
                    spaceFound = 1;
                    break;
                }
                j++;
            }
            if (spaceFound)
            {
                // Middle name → print initial
                printf("%c.", name[i + 1]);
            }
            else
            {
                // Last word → print surname in full
                printf(" %s", &name[i + 1]);
                break;
            }
        }
    }

    printf("\n");
    return 0;
}

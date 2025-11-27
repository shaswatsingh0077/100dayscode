#include <stdio.h>
#include <string.h>

int main()
{
    char name[200];
    int i;

    // Input name
    printf("Enter a full name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline if present
    name[strcspn(name, "\n")] = '\0';

    printf("Initials: ");
    // Print first character if alphabet
    if (name[0] != ' ')
    {
        printf("%c", name[0]);
    }

    // Traverse string
    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == ' ' && name[i + 1] != '\0' && name[i + 1] != ' ')
        {
            printf("%c", name[i + 1]);
        }
    }

    printf("\n");
    return 0;
}

#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    char filename[100];
    char newLine[200];

    // Input filename
    printf("Enter filename: ");
    scanf("%s", filename);

    // Open file in append mode
    fp = fopen(filename, "a");
    if (fp == NULL)
    {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    // Clear input buffer before fgets
    getchar();

    // Take new line of text from user
    printf("Enter a new line of text: ");
    fgets(newLine, sizeof(newLine), stdin);

    // Remove newline character if present
    newLine[strcspn(newLine, "\n")] = '\0';

    // Append to file
    fprintf(fp, "%s\n", newLine);

    // Close file
    fclose(fp);

    printf("Text successfully appended to %s\n", filename);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *src, *dest;
    char srcFile[100], destFile[100];
    int ch;

    // Input filenames
    printf("Enter source filename: ");
    scanf("%s", srcFile);
    printf("Enter destination filename: ");
    scanf("%s", destFile);

    // Open source file in read mode
    src = fopen(srcFile, "r");
    if (src == NULL)
    {
        printf("Error: Could not open source file %s\n", srcFile);
        return 1;
    }

    // Open destination file in write mode
    dest = fopen(destFile, "w");
    if (dest == NULL)
    {
        printf("Error: Could not open destination file %s\n", destFile);
        fclose(src);
        return 1;
    }

    // Copy contents character by character
    while ((ch = fgetc(src)) != EOF)
    {
        fputc(ch, dest);
    }

    // Close files
    fclose(src);
    fclose(dest);

    printf("File copied successfully from %s to %s\n", srcFile, destFile);

    return 0;
}

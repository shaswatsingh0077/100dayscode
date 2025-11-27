#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char buffer[256]; // buffer to store each line

    // Open file in read mode
    fp = fopen("info.txt", "r");
    if (fp == NULL)
    {
        printf("Error: Could not open file info.txt\n");
        return 1;
    }

    // Read and print lines until EOF
    printf("Contents of info.txt:\n");
    while (fgets(buffer, sizeof(buffer), fp) != NULL)
    {
        printf("%s", buffer);
    }

    // Close file
    fclose(fp);

    return 0;
}

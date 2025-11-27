#include <stdio.h>

int main()
{
    FILE *fp;
    char name[50];
    int age;

    // Open file in write mode
    fp = fopen("info.txt", "w");
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    // Take user input
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline character if present
    if (name[strlen(name) - 1] == '\n')
    {
        name[strlen(name) - 1] = '\0';
    }

    printf("Enter your age: ");
    scanf("%d", &age);

    // Write to file
    fprintf(fp, "Name: %s\nAge: %d\n", name, age);

    // Close file
    fclose(fp);

    // Confirmation message
    printf("Data successfully saved to info.txt\n");

    return 0;
}

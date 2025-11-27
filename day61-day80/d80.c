#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char name[50];
    int roll, marks;
    int n, i;

    // Open file in write mode
    fp = fopen("students.txt", "w");
    if (fp == NULL)
    {
        printf("Error: Could not open file for writing\n");
        return 1;
    }

    // Input number of students
    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input and store student records
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details for student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", name);
        printf("Roll number: ");
        scanf("%d", &roll);
        printf("Marks: ");
        scanf("%d", &marks);

        // Write to file
        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }

    fclose(fp);
    printf("\nRecords successfully saved to students.txt\n");

    // Open file in read mode
    fp = fopen("students.txt", "r");
    if (fp == NULL)
    {
        printf("Error: Could not open file for reading\n");
        return 1;
    }

    // Read and display records
    printf("\nStudent Records:\n");
    while (fscanf(fp, "%s %d %d", name, &roll, &marks) == 3)
    {
        printf("Name: %s, Roll: %d, Marks: %d\n", name, roll, marks);
    }

    fclose(fp);
    return 0;
}

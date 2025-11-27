#include <stdio.h>

// Define Date structure
struct Date
{
    int day;
    int month;
    int year;
};

// Define Employee structure
struct Employee
{
    char name[50];
    int id;
    float salary;
    struct Date joining_date;
};

int main()
{
    struct Employee emp_write, emp_read;
    FILE *fp;

    // Input employee details
    printf("Enter employee name: ");
    scanf("%s", emp_write.name);

    printf("Enter employee ID: ");
    scanf("%d", &emp_write.id);

    printf("Enter salary: ");
    scanf("%f", &emp_write.salary);

    printf("Enter joining date (dd mm yyyy): ");
    scanf("%d %d %d", &emp_write.joining_date.day,
          &emp_write.joining_date.month,
          &emp_write.joining_date.year);

    // --- Write to binary file ---
    fp = fopen("employee.dat", "wb"); // open in write-binary mode
    if (fp == NULL)
    {
        printf("Error opening file for writing!\n");
        return 1;
    }
    fwrite(&emp_write, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // --- Read from binary file ---
    fp = fopen("employee.dat", "rb"); // open in read-binary mode
    if (fp == NULL)
    {
        printf("Error opening file for reading!\n");
        return 1;
    }
    fread(&emp_read, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // Print employee details read from file
    printf("\n--- Employee Details (Read from File) ---\n");
    printf("Name: %s\n", emp_read.name);
    printf("ID: %d\n", emp_read.id);
    printf("Salary: %.2f\n", emp_read.salary);
    printf("Joining Date: %02d-%02d-%04d\n",
           emp_read.joining_date.day,
           emp_read.joining_date.month,
           emp_read.joining_date.year);

    return 0;
}

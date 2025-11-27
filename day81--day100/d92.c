#include <stdio.h>

// Define structure Student
struct Student
{
    char name[50];
    int roll_no;
    float marks;
};

int main()
{
    struct Student students[5]; // Array of 5 students
    int i;

    // Input details of 5 students
    for (i = 0; i < 5; i++)
    {
        printf("\nEnter details for student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll number: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Print all student details
    printf("\n--- Student Records ---\n");
    for (i = 0; i < 5; i++)
    {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].roll_no);
        printf("Marks: %.2f\n\n", students[i].marks);
    }

    return 0;
}

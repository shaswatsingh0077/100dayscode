#include <stdio.h>

// Define structure Student
struct Student
{
    char name[50];
    int roll_no;
    float marks;
};

// Function to find top student
struct Student findTopStudent(struct Student students[], int n)
{
    int i, maxIndex = 0;
    for (i = 1; i < n; i++)
    {
        if (students[i].marks > students[maxIndex].marks)
        {
            maxIndex = i;
        }
    }
    return students[maxIndex]; // Return structure
}

int main()
{
    struct Student students[5];
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

    // Call function to get top student
    struct Student top = findTopStudent(students, 5);

    // Print top student details
    printf("\n--- Top Student ---\n");
    printf("Name: %s\n", top.name);
    printf("Roll Number: %d\n", top.roll_no);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}

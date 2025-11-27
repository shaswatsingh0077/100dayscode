#include <stdio.h>
#include <string.h>

// Define Student structure
struct Student
{
    char name[50];
    int roll_no;
    float marks;
};

// Function to compare two students
int areIdentical(struct Student s1, struct Student s2)
{
    if (strcmp(s1.name, s2.name) == 0 &&
        s1.roll_no == s2.roll_no &&
        s1.marks == s2.marks)
    {
        return 1; // identical
    }
    return 0; // not identical
}

int main()
{
    struct Student s1, s2;

    // Input first student
    printf("Enter details of first student:\n");
    printf("Name: ");
    scanf("%s", s1.name);
    printf("Roll number: ");
    scanf("%d", &s1.roll_no);
    printf("Marks: ");
    scanf("%f", &s1.marks);

    // Input second student
    printf("\nEnter details of second student:\n");
    printf("Name: ");
    scanf("%s", s2.name);
    printf("Roll number: ");
    scanf("%d", &s2.roll_no);
    printf("Marks: ");
    scanf("%f", &s2.marks);

    // Check if identical
    if (areIdentical(s1, s2))
    {
        printf("\nThe two students are IDENTICAL.\n");
    }
    else
    {
        printf("\nThe two students are DIFFERENT.\n");
    }

    return 0;
}

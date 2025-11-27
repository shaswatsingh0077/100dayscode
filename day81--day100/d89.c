#include <stdio.h>

// Define enum for Gender
enum Gender
{
    MALE,
    FEMALE,
    OTHER
};

// Define struct with enum Gender
struct Person
{
    char name[50];
    int age;
    enum Gender gender;
};

int main()
{
    struct Person p;

    // Input person details
    printf("Enter name: ");
    scanf("%s", p.name);

    printf("Enter age: ");
    scanf("%d", &p.age);

    printf("Enter gender (0 = MALE, 1 = FEMALE, 2 = OTHER): ");
    scanf("%d", (int *)&p.gender);

    // Print details
    printf("\nPerson Details:\n");
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);

    // Print gender based on enum value
    switch (p.gender)
    {
    case MALE:
        printf("Gender: Male\n");
        break;
    case FEMALE:
        printf("Gender: Female\n");
        break;
    case OTHER:
        printf("Gender: Other\n");
        break;
    default:
        printf("Invalid gender value\n");
    }

    return 0;
}

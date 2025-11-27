#include <stdio.h>

// Define enumeration for user roles
enum UserRole
{
    ADMIN = 1,
    USER,
    GUEST
};

int main()
{
    enum UserRole role;

    // Example: set role manually (you can take input instead)
    role = ADMIN;

    // Display message based on role
    switch (role)
    {
    case ADMIN:
        printf("Welcome Admin! You have full access.\n");
        break;
    case USER:
        printf("Welcome User! You have limited access.\n");
        break;
    case GUEST:
        printf("Welcome Guest! You can only view content.\n");
        break;
    default:
        printf("Invalid role.\n");
    }

    return 0;
}

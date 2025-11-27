#include <stdio.h>

// Define an enum with explicit values
enum Status
{
    SUCCESS = 1,
    FAILURE = 5,
    TIMEOUT = 10
};

int main()
{
    // Print enum values
    printf("SUCCESS = %d\n", SUCCESS);
    printf("FAILURE = %d\n", FAILURE);
    printf("TIMEOUT = %d\n", TIMEOUT);

    return 0;
}

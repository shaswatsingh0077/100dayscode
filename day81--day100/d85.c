#include <stdio.h>

// Define enumeration with explicit values starting from 10
enum Example
{
    FIRST = 10,
    SECOND, // will be 11
    THIRD,  // will be 12
    FOURTH  // will be 13
};

int main()
{
    printf("FIRST = %d\n", FIRST);
    printf("SECOND = %d\n", SECOND);
    printf("THIRD = %d\n", THIRD);
    printf("FOURTH = %d\n", FOURTH);

    return 0;
}

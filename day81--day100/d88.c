#include <stdio.h>

// Define enumeration
enum Days
{
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main()
{
    // Array of strings to hold names
    const char *dayNames[] = {
        "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY",
        "THURSDAY", "FRIDAY", "SATURDAY"};

    // Loop through enum values
    for (int d = SUNDAY; d <= SATURDAY; d++)
    {
        printf("%s = %d\n", dayNames[d], d);
    }

    return 0;
}

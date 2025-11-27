#include <stdio.h>
#include <string.h>

int main()
{
    char date[20], day[3], month[3], year[5];
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    // Input date
    printf("Enter date in format dd/mm/yyyy: ");
    fgets(date, sizeof(date), stdin);

    // Extract day, month, year using sscanf
    sscanf(date, "%2s/%2s/%4s", day, month, year);

    // Convert month string to integer
    int m = atoi(month);

    // Output in new format
    printf("Formatted Date: %s-%s-%s\n", day, months[m - 1], year);

    return 0;
}

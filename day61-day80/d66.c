#include <stdio.h>

int main()
{
    int nums[100], n, target, i, j;
    int found = 0;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array
    printf("Enter %d positive integers: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    // Input target
    printf("Enter target sum: ");
    scanf("%d", &target);

    // Brute force search for two indices
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                printf("%d %d\n", i, j);
                found = 1;
                break;
            }
        }
        if (found)
            break;
    }

    // If no solution found
    if (!found)
    {
        printf("-1 -1\n");
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int nums[100], n, i;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    // Boyer-Moore Majority Vote Algorithm
    int candidate = -1, count = 0;
    for (i = 0; i < n; i++)
    {
        if (count == 0)
        {
            candidate = nums[i];
            count = 1;
        }
        else if (nums[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    // Verify candidate
    int freq = 0;
    for (i = 0; i < n; i++)
    {
        if (nums[i] == candidate)
        {
            freq++;
        }
    }

    if (freq > n / 2)
    {
        printf("Majority element: %d\n", candidate);
    }
    else
    {
        printf("-1\n");
    }

    return 0;
}

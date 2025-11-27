#include <stdio.h>

// Function to find first occurrence
int firstOccurrence(int nums[], int n, int target)
{
    int low = 0, high = n - 1, result = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (nums[mid] == target)
        {
            result = mid;
            high = mid - 1; // search left side
        }
        else if (nums[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return result;
}

// Function to find last occurrence
int lastOccurrence(int nums[], int n, int target)
{
    int low = 0, high = n - 1, result = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (nums[mid] == target)
        {
            result = mid;
            low = mid + 1; // search right side
        }
        else if (nums[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return result;
}

int main()
{
    int nums[100], n, target, i;

    // Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input sorted array
    printf("Enter %d sorted elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    // Input target
    printf("Enter target element: ");
    scanf("%d", &target);

    // Find first and last occurrence
    int first = firstOccurrence(nums, n, target);
    int last = lastOccurrence(nums, n, target);

    // Output result
    if (first == -1 || last == -1)
    {
        printf("-1, -1\n");
    }
    else
    {
        printf("First occurrence index: %d\n", first);
        printf("Last occurrence index: %d\n", last);
    }

    return 0;
}

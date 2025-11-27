#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int totalSum = 0, leftSum = 0;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        totalSum += arr[i]; // calculate total sum
    }

    // Find pivot index
    for (i = 0; i < n; i++)
    {
        int rightSum = totalSum - leftSum - arr[i];
        if (leftSum == rightSum)
        {
            printf("Pivot index: %d\n", i);
            return 0; // leftmost pivot found
        }
        leftSum += arr[i];
    }

    // If no pivot index found
    printf("-1\n");
    return 0;
}

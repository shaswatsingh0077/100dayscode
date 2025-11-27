#include <stdio.h>

int main()
{
    int arr[100], n, k, i;
    int sum = 0, maxSum;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input k
    printf("Enter subarray size k: ");
    scanf("%d", &k);

    if (k > n || k <= 0)
    {
        printf("Invalid subarray size.\n");
        return 0;
    }

    // Compute sum of first k elements
    for (i = 0; i < k; i++)
    {
        sum += arr[i];
    }
    maxSum = sum;

    // Sliding window
    for (i = k; i < n; i++)
    {
        sum = sum - arr[i - k] + arr[i];
        if (sum > maxSum)
        {
            maxSum = sum;
        }
    }

    // Output result
    printf("Maximum sum of subarrays of size %d: %d\n", k, maxSum);

    return 0;
}

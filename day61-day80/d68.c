#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int actualSum = 0, expectedSum, missing;

    // Input size
    printf("Enter size of array: ");
    scanf("%d", &n);

    // Input array
    printf("Enter %d elements (between 0 and %d, missing one): ", n, n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        actualSum += arr[i];
    }

    // Calculate expected sum
    expectedSum = n * (n + 1) / 2;

    // Find missing number
    missing = expectedSum - actualSum;

    // Output result
    printf("Missing number: %d\n", missing);

    return 0;
}

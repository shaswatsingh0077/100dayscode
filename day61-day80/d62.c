#include <stdio.h>

int main()
{
    int arr[100], n, i;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Kadane's Algorithm
    int maxEndingHere = arr[0];
    int maxSoFar = arr[0];

    for (i = 1; i < n; i++)
    {
        if (maxEndingHere + arr[i] > arr[i])
            maxEndingHere = maxEndingHere + arr[i];
        else
            maxEndingHere = arr[i];

        if (maxEndingHere > maxSoFar)
            maxSoFar = maxEndingHere;
    }

    // Output result
    printf("Maximum subarray sum: %d\n", maxSoFar);

    return 0;
}

#include <stdio.h>

int main()
{
    int arr[100], n, i, j;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Find next greater element using brute force
    printf("Next Greater Elements: ");
    for (i = 0; i < n; i++)
    {
        int nextGreater = -1;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                nextGreater = arr[j];
                break;
            }
        }
        // Print with comma separation
        if (i == n - 1)
            printf("%d", nextGreater); // last element, no comma
        else
            printf("%d,", nextGreater);
    }
    printf("\n");

    return 0;
}

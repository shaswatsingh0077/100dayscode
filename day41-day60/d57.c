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

    // Find previous greater element using brute force
    printf("Previous Greater Elements: ");
    for (i = 0; i < n; i++)
    {
        int prevGreater = -1;
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > arr[i])
            {
                prevGreater = arr[j];
                break;
            }
        }
        // Print with comma separation
        if (i == n - 1)
            printf("%d", prevGreater); // last element, no comma
        else
            printf("%d,", prevGreater);
    }
    printf("\n");

    return 0;
}

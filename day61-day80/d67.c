#include <stdio.h>

int main()
{
    int arr1[100], arr2[100], merged[200];
    int m, n, i, j, k;

    // Input sizes
    printf("Enter size of first array: ");
    scanf("%d", &m);
    printf("Enter size of second array: ");
    scanf("%d", &n);

    // Input arrays
    printf("Enter %d sorted elements for first array: ", m);
    for (i = 0; i < m; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter %d sorted elements for second array: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // Merge process
    i = 0;
    j = 0;
    k = 0;
    while (i < m && j < n)
    {
        if (arr1[i] <= arr2[j])
        {
            merged[k++] = arr1[i++];
        }
        else
        {
            merged[k++] = arr2[j++];
        }
    }

    // Copy remaining elements
    while (i < m)
    {
        merged[k++] = arr1[i++];
    }
    while (j < n)
    {
        merged[k++] = arr2[j++];
    }

    // Print merged array
    printf("Merged sorted array: ");
    for (i = 0; i < m + n; i++)
    {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}

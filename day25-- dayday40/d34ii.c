#include <stdio.h>

int main()
{
    int n, i, pos;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100]; // fixed size for simplicity

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input position to delete
    printf("Enter position (1 to %d) to delete: ", n);
    scanf("%d", &pos);

    if (pos < 1 || pos > n)
    {
        printf("Invalid position!\n");
    }
    else
    {
        // Shift elements to the left
        for (i = pos - 1; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        n--; // reduce size

        // Print new array
        printf("Array after deletion:\n");
        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}

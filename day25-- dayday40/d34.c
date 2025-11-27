#include <stdio.h>

int main()
{
    int n, i, key, pos;

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

    // Input element and position
    printf("Enter element to insert: ");
    scanf("%d", &key);
    printf("Enter position (1 to %d): ", n + 1);
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1)
    {
        printf("Invalid position!\n");
    }
    else
    {
        // Shift elements to the right
        for (i = n; i >= pos; i--)
        {
            arr[i] = arr[i - 1];
        }

        // Insert element
        arr[pos - 1] = key;
        n++;

        // Print new array
        printf("Array after insertion:\n");
        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}

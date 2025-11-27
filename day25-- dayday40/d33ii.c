#include <stdio.h>

int main()
{
    int n, i, key, pos;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100]; // fixed size for simplicity

    // Input sorted array
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input element to insert
    printf("Enter element to insert: ");
    scanf("%d", &key);

    // Find position
    pos = n;
    for (i = 0; i < n; i++)
    {
        if (key < arr[i])
        {
            pos = i;
            break;
        }
    }

    // Shift elements to the right
    for (i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Insert element
    arr[pos] = key;
    n++;

    // Print new array
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

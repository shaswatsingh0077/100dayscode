#include <stdio.h>

// Function to find ceil index
int findCeil(int arr[], int n, int x)
{
    int low = 0, high = n - 1, result = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] >= x)
        {
            result = mid;   // possible ceil
            high = mid - 1; // search left for smaller index
        }
        else
        {
            low = mid + 1; // search right
        }
    }
    return result;
}

int main()
{
    int arr[100], n, x, i;

    // Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input sorted array
    printf("Enter %d sorted elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input target x
    printf("Enter target element x: ");
    scanf("%d", &x);

    // Find ceil index
    int index = findCeil(arr, n, x);

    // Output result
    if (index == -1)
        printf("-1\n");
    else
        printf("Ceil of %d is %d at index %d\n", x, arr[index], index);

    return 0;
}

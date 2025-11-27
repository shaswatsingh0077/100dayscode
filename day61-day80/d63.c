#include <stdio.h>

// Function to sort array using simple bubble sort
void sortArray(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[100], n, k, i;

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
    printf("Enter k: ");
    scanf("%d", &k);

    // Sort array
    sortArray(arr, n);

    // Find kth smallest
    if (k <= 0 || k > n)
    {
        printf("Invalid k\n");
    }
    else
    {
        printf("Kth smallest element: %d\n", arr[k - 1]);
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int arr[100], n, k, i, j;

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
    printf("Enter window size k: ");
    scanf("%d", &k);

    if (k > n || k <= 0)
    {
        printf("Invalid window size.\n");
        return 0;
    }

    // Find first negative in each window
    printf("First negatives in each window: ");
    for (i = 0; i <= n - k; i++)
    {
        int found = 0;
        for (j = i; j < i + k; j++)
        {
            if (arr[j] < 0)
            {
                printf("%d ", arr[j]);
                found = 1;
                break;
            }
        }
        if (!found)
        {
            printf("0 ");
        }
    }
    printf("\n");

    return 0;
}

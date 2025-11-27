#include <stdio.h>

int main()
{
    int n, i;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("Array must have at least two elements.\n");
        return 0;
    }

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0], secondLargest = -2147483648; // minimum int value

    for (i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == -2147483648)
    {
        printf("No second largest element (all elements are equal).\n");
    }
    else
    {
        printf("Second largest element = %d\n", secondLargest);
    }

    return 0;
}

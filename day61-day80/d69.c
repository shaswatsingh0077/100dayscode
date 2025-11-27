#include <stdio.h>

int main()
{
    int arr[100], visited[1000] = {0}; // visited array large enough
    int n, i;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Find repeated element in one iteration
    for (i = 0; i < n; i++)
    {
        if (visited[arr[i]] == 1)
        {
            printf("Repeated element: %d\n", arr[i]);
            return 0;
        }
        visited[arr[i]] = 1;
    }

    // If no repetition found (though problem guarantees one)
    printf("No repeated element found\n");
    return 0;
}

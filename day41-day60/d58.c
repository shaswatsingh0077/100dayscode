#include <stdio.h>

int main()
{
    int nums[100], answer[100], prefix[100], suffix[100];
    int n, i;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    // Build prefix product
    prefix[0] = 1;
    for (i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }

    // Build suffix product
    suffix[n - 1] = 1;
    for (i = n - 2; i >= 0; i--)
    {
        suffix[i] = suffix[i + 1] * nums[i + 1];
    }

    // Build answer
    for (i = 0; i < n; i++)
    {
        answer[i] = prefix[i] * suffix[i];
    }

    // Print result
    printf("Answer array: ");
    for (i = 0; i < n; i++)
    {
        if (i == n - 1)
            printf("%d", answer[i]);
        else
            printf("%d,", answer[i]);
    }
    printf("\n");

    return 0;
}

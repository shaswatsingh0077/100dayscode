#include <stdio.h>

int main()
{
    int n, i, j, sum = 0;

    // Input matrix size
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    // Read matrix elements
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum of main diagonal
    for (i = 0; i < n; i++)
    {
        sum += matrix[i][i]; // only diagonal elements
    }

    // Print result
    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}

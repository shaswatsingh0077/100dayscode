#include <stdio.h>

int main()
{
    int m, n, i, j;

    // Input matrix size
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);

    int matrix[m][n];
    int rowSum[m];

    // Read matrix elements
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate row sums
    for (i = 0; i < m; i++)
    {
        rowSum[i] = 0;
        for (j = 0; j < n; j++)
        {
            rowSum[i] += matrix[i][j];
        }
    }

    // Print row sums
    printf("Sum of each row:\n");
    for (i = 0; i < m; i++)
    {
        printf("Row %d sum = %d\n", i + 1, rowSum[i]);
    }

    return 0;
}

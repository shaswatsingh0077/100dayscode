#include <stdio.h>

int main()
{
    int m, n, i, j, k;

    // Input matrix size
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);

    int matrix[m][n];

    // Read matrix elements
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Diagonal traversal
    printf("Diagonal traversal of the matrix:\n");
    for (k = 0; k <= m + n - 2; k++)
    {
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (i + j == k)
                {
                    printf("%d ", matrix[i][j]);
                }
            }
        }
        printf("\n");
    }

    return 0;
}

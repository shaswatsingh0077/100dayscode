#include <stdio.h>

int main()
{
    int m, n, i, j, flag = 1;

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

    // Check symmetry
    if (m != n)
    {
        printf("Matrix is not symmetric (not square).\n");
    }
    else
    {
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (matrix[i][j] != matrix[j][i])
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 0)
                break;
        }

        if (flag)
            printf("Matrix is symmetric.\n");
        else
            printf("Matrix is not symmetric.\n");
    }

    return 0;
}

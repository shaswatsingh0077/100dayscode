#include <stdio.h>

int main()
{
    int m, n, i, j, k, flag = 1;

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

    // Check distinctness of diagonal elements
    for (i = 0; i < m && i < n; i++)
    {
        for (k = i + 1; k < m && k < n; k++)
        {
            if (matrix[i][i] == matrix[k][k])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
            break;
    }

    if (flag)
        printf("Diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are not distinct.\n");

    return 0;
}

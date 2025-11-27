#include <stdio.h>

int main()
{
    int m, n, i, j, sum = 0;

    // Input matrix size
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);

    int matrix[m][n]; // declare 2D array

    // Read matrix elements and calculate sum
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j]; // accumulate sum
        }
    }

    // Print result
    printf("Sum of all elements in the matrix = %d\n", sum);

    return 0;
}

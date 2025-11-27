#include <stdio.h>

int main()
{
    int rowsA, colsA, rowsB, colsB;
    int i, j, k;

    // Input dimensions of Matrix A
    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &rowsA, &colsA);

    int A[rowsA][colsA];

    printf("Enter elements of Matrix A:\n");
    for (i = 0; i < rowsA; i++)
    {
        for (j = 0; j < colsA; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // Input dimensions of Matrix B
    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &rowsB, &colsB);

    int B[rowsB][colsB];

    printf("Enter elements of Matrix B:\n");
    for (i = 0; i < rowsB; i++)
    {
        for (j = 0; j < colsB; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    // Check multiplication possibility
    if (colsA != rowsB)
    {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }

    int C[rowsA][colsB];

    // Multiply matrices
    for (i = 0; i < rowsA; i++)
    {
        for (j = 0; j < colsB; j++)
        {
            C[i][j] = 0;
            for (k = 0; k < colsA; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print result
    printf("Resultant Matrix (A × B):\n");
    for (i = 0; i < rowsA; i++)
    {
        for (j = 0; j < colsB; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

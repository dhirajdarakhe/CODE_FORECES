#include <stdio.h>

int main()
{
    int mat[3][3];
    int i, j;

    // Input matrix elements
    printf("Enter the elements of matrix: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            mat[i][j] = i + (j * 3) + 1;
        }
    }

 printf("\nOriginal matrix: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    // Transpose matrix in-place
    for (i = 0; i < 3; i++)
    {
        for (j = i + 1; j < 3; j++)
        {
            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }

    // Display Transposed matrix
    printf("\nTransposed matrix: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
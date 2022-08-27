#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
    // declaration of variables
    int *x, *y, *z;
    int row, col;
    int size;
    int *ans, *fmatrix, *smatrix;
    int i, j;
    // Taking a row and column of Matrix A and B
    printf("Enter the row and column of Matrix: \n");
    scanf("%d %d", &row, &col);
    // Calculate the size of answer matrix.
    size = row * col;
    x = (int *)malloc(size * sizeof(int *));
    fmatrix = x;
    y = (int *)malloc(size * sizeof(int *));
    smatrix = y;
    z = (int *)malloc(size * sizeof(int *));
    ans = z;

    printf("Enter the elements of the first matrix A\n");
    for (i = 0; i < size; i++, fmatrix++)
        scanf("%d", fmatrix);

    printf("Enter the elements of the second matrix B\n");
    for (i = 0; i < size; i++, smatrix++)
        scanf("%d", smatrix);

    // Addition Logic
    fmatrix = x;
    smatrix = y;
    for (i = 0; i < size; i++)
    {
        ans[i] = fmatrix[i] + smatrix[i];
    }
    // display the answer matrix
    printf("\n The value of matrix 'C' =\n");
    ans = z;
    for (i = 0; i < row; i++)
    {
        printf("\n");
        for (j = 0; j < col; j++)
            printf("%d\t", ans[j]);
    }
    // release matrix
    free(x);
    free(y);
    free(z);
    return 0;
}

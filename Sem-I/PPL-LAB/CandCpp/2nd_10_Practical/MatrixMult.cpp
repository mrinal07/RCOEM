
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
    // declaration of variables
    int *ans, *first, *second;
    int size;
    int *A, *B, *C;
    int row, col;
    int i, j, k = 0;
    // Taking a row and column of Matrix A and B
    printf("Enter the row and column of Matrix\n");
    scanf("%d %d", &row, &col);

    // Calculate the size of answer matrix.
    size = row * col;

    A = (int *)malloc(size * sizeof(int *));
    first = A;
    B = (int *)malloc(size * sizeof(int *));
    second = B;
    C = (int *)malloc(size * sizeof(int *));
    ans = C;
    printf("Enter the elements of the first matrix A\n");
    for (i = 0; i < size; i++, first++)
        scanf("%d", first);
    printf("Enter the elements of the second matrix B\n");
    for (i = 0; i < size; i++, second++)
        scanf("%d", second);
    // Multiplication Logic
    first = A;
    second = B;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            *ans = 0;
            for (k = 0; k < row; k++)
            {
                *ans = *ans + (*(first + (k + i * col))) * (*(second + (j + k * row)));
            }
            ans++;
        }
    }

    printf("\n The value of matrix 'c' =\n");
    ans = C;
    for (i = 0; i < row; i++)
    {
        printf("\n");
        for (j = 0; j < col; j++, ans++)
            printf("%d\t", *ans);
    }
    // release matrix
    free(A);
    free(B);
    free(C);
    return 0;
}

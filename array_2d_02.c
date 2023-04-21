// Write a program to accept a matrix A of size mXn and store its transpose in matrix B.
// Display matrix B.
#include <stdio.h>
int main(){
    int i, j, row, col;
    printf("Enter the number of rows and column: ");
    scanf("%d %d",&row, &col);
    int A[row][col], B[row][col];
    printf("Enter the elements in the matrix: ");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Transpose of the matrix:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            B[i][j] = A[j][i];
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    return 0;
}
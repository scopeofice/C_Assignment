// Write a program to add and multiply two matrices. Perform necessary checks before adding and 
// multiplying the matrices.
#include <stdio.h>
int main(){
    int m, n, p, q, i, j, k;
    printf("Enter the number of rows and column of the first matrix: ");
    scanf("%d %d",&m, &n);
    printf("Enter the number of rows and column of the second matrix: ");
    scanf("%d %d",&p, &q);
    int A[m][n], B[p][q], C[m][q];
    // checking condition for adding two matrices
    if (m != p || n != q)
    {
        printf("Matrices can not be added.");
    }
    else
    {
        printf("Enter the elements of first matrix:\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                scanf("%d", &A[i][j]);
            }
        }
        printf("Enter the elements of second matrix:\n");
        for (i = 0; i < p; i++)
        {
            for (j = 0; j < q; j++)
            {
                scanf("%d", &B[i][j]);
            }
        }
        // Adding two matrices
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                C[i][j] = A[i][j] + B[i][j];
            }
        }
        // printing resultant matrix
        printf("Result of matrix addition:\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%d ", C[i][j]);
            }
            printf("\n");
        }
    }
    // checking condition for multiplying two matrices
    if (n != p)
    {
        printf("Matrices can not be multiplyed.");
    }
    else
    {
        // Multiplying two matrices
        for(i = 0; i < m; i++)
        {
            for(j = 0; j < q; j++)
            {
                C[i][j] = 0;
                for(k = 0; k < n; k++)
                {
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }
        // printing resultant matrix
        printf("Result of matrix multiplaction:\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                printf("%d ", C[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}    
    

    
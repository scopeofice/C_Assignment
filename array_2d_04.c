// Write a program to perform the following operations on a square matrix. Write 
// i) Check if the matrix is symmetric.
// ii) Display the trace of the matrix (sum of diagonal elements). 
// iii) Check if the matrix is an upper triangular matrix.

#include <stdio.h>
#define MAX_SIZE 10

int main() {
    int size, matrix[MAX_SIZE][MAX_SIZE], i, j;
    int isSymmetric = 1, trace = 0, isUpperTriangular = 1;

    printf("Enter size of the matrix: ");
    scanf("%d", &size);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if matrix is symmetric
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (isSymmetric == 0) {
            break;
        }
    }

    // Calculate trace of the matrix
    for (i = 0; i < size; i++) {
        trace += matrix[i][i];
    }

    // Check if matrix is upper triangular
    for (i = 1; i < size; i++) {
        for (j = 0; j < i; j++) {
            if (matrix[i][j] != 0) {
                isUpperTriangular = 0;
                break;
            }
        }
        if (isUpperTriangular == 0) {
            break;
        }
    }

    // Display results
    if (isSymmetric == 1) {
        printf("Matrix is symmetric\n");
    } else {
        printf("Matrix is not symmetric\n");
    }

    printf("Trace of the matrix is %d\n", trace);

    if (isUpperTriangular == 1) {
        printf("Matrix is upper triangular\n");
    } else {
        printf("Matrix is not upper triangular\n");
    }

    return 0;
}


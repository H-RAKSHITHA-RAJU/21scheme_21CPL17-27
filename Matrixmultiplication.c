#include <stdio.h>

// Function to perform matrix multiplication
// A: First matrix
// B: Second matrix
// C: Resultant matrix
// m: Number of rows in matrix A
// n: Number of columns in matrix A (and rows in matrix B)
// p: Number of columns in matrix B
void matrixMultiplication(int A[][100], int B[][100], int C[][100], int m, int n, int p) {
    int i, j, k;

    // Initialize the resultant matrix to all zeros
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            C[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            for (k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Function to print a matrix
void printMatrix(int mat[][100], int m, int n) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[100][100], B[100][100], C[100][100];
    int m, n, p, q, i, j;

    // Input dimensions of matrices A and B
    printf("Enter the number of rows and columns of matrix A: ");
    scanf("%d %d", &m, &n);
    printf("Enter the number of rows and columns of matrix B: ");
    scanf("%d %d", &p, &q);

    // Validate dimensions for matrix multiplication
    if (n != p) {
        printf("Matrix multiplication not possible: Number of columns of matrix A must be equal to number of rows of matrix B.\n");
        return 0;
    }

    // Input elements of matrix A
    printf("Enter elements of matrix A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Input elements of matrix B
    printf("Enter elements of matrix B:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    // Perform matrix multiplication
    matrixMultiplication(A, B, C, m, n, q);

    // Print the matrices and their product
    printf("\nMatrix A:\n");
    printMatrix(A, m, n);
    printf("\nMatrix B:\n");
    printMatrix(B, p, q);
    printf("\nResultant Matrix C (A * B):\n");
    printMatrix(C, m, q);

    return 0;
}
/*
 sample inputs and outputs for various scenarios of matrix multiplication:

1.Valid multiplication:
Input:
Enter the number of rows and columns of matrix A: 2 3
Enter the number of rows and columns of matrix B: 3 2
Enter elements of matrix A:
A[0][0]: 1
A[0][1]: 2
A[0][2]: 3
A[1][0]: 4
A[1][1]: 5
A[1][2]: 6
Enter elements of matrix B:
B[0][0]: 7
B[0][1]: 8
B[1][0]: 9
B[1][1]: 10
B[2][0]: 11
B[2][1]: 12

Output:
Matrix A:
1 2 3
4 5 6

Matrix B:
7 8
9 10
11 12

Resultant Matrix C (A * B):
58 64
139 154

2.Invalid multiplication (incorrect dimensions):
Input:
Enter the number of rows and columns of matrix A: 2 2
Enter the number of rows and columns of matrix B: 2 3

Output:
Matrix multiplication not possible: Number of columns of matrix A must be equal to number of rows of matrix B.

3.Matrix with all zeros:
Input:
Enter the number of rows and columns of matrix A: 2 2
Enter the number of rows and columns of matrix B: 2 2
Enter elements of matrix A:
A[0][0]: 0
A[0][1]: 0
A[1][0]: 0
A[1][1]: 0
Enter elements of matrix B:
B[0][0]: 0
B[0][1]: 0
B[1][0]: 0
B[1][1]: 0

Output:
Matrix A:
0 0
0 0

Matrix B:
0 0
0 0

Resultant Matrix C (A * B):
0 0
0 0

4.Matrix with all ones:
Input:
Enter the number of rows and columns of matrix A: 2 2
Enter the number of rows and columns of matrix B: 2 2
Enter elements of matrix A:
A[0][0]: 1
A[0][1]: 1
A[1][0]: 1
A[1][1]: 1
Enter elements of matrix B:
B[0][0]: 1
B[0][1]: 1
B[1][0]: 1
B[1][1]: 1

Output:
Matrix A:
1 1
1 1

Matrix B:
1 1
1 1

Resultant Matrix C (A * B):
2 2
2 2

These examples cover various scenarios of matrix multiplication and demonstrate how the program handles different cases.
*/

/*
 * This program reads two matrices of n*n elements.
 * 'n' is given by the user.
 * Then it will produce a third matrix.
 * Which will consist of the sum of the previous matrices.
 *
 * Author: Cesar Alejandro Arias Perales
 * Date: October 15th, 2018
 * Mail: A01411995@itesm.mx
 */

#include <stdio.h>

// This function stores the value.
void ReadMatrix(int n, int matrix[n][n]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("Row: %d and column: %d. ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// This function prints the values enterd.
void PrintMatrix(int n, int matrix[n][n]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function for the sum of the matrices.
void SumMatrices(int n, int matrix1[n][n], int matrix2[n][n], int matrix3[n][n]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

int main() {
    int n;

    do {
        printf("Considering there's a limit from to 2 to 10.\n");
        printf("How many rows and columns would you like in your matrices?\n");
        scanf("%d", &n);
    } while(n<2 || n>10);

    // Declaration of the arrays.
    int matrix1[n][n];
    int matrix2[n][n];
    int matrix3[n][n];

    printf("First Matrix:\n");
    ReadMatrix(n, matrix1);

    printf("Second Matrix:\n");
    ReadMatrix(n, matrix2);

    printf("First Matrix:\n");
    PrintMatrix(n, matrix1);

    printf("Second Matrix:\n");
    PrintMatrix(n, matrix2);

    printf("Sum of both matrices:\n");
    SumMatrices(n, matrix1, matrix2, matrix3);
    PrintMatrix(n, matrix3);

    return 0;
}
#include <stdio.h>

#define MAX 100


void inputMatrix(int matrix[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}


void addMatrices(int matrix1[MAX][MAX], int matrix2[MAX][MAX], int result[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}


void printMatrix(int matrix[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;
    int matrix1[MAX][MAX], matrix2[MAX][MAX], result[MAX][MAX];

 
    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &rows, &cols);

  
    printf("Enter the elements of the first matrix:\n");
    inputMatrix(matrix1, rows, cols);

  
    printf("Enter the elements of the second matrix:\n");
    inputMatrix(matrix2, rows, cols);

  
    addMatrices(matrix1, matrix2, result, rows, cols);

   
    printf("The resulting matrix after addition is:\n");
    printMatrix(result, rows, cols);

    return 0;
}

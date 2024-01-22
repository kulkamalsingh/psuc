#include <stdio.h>

#define MAX_SIZE 10

void inputMatrix(int rows, int cols, int matrix[MAX_SIZE][MAX_SIZE])
{
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void outputMatrix(int rows, int cols, int matrix[MAX_SIZE][MAX_SIZE])
{
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int rows, int cols, int matrix1[MAX_SIZE][MAX_SIZE], int matrix2[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void subtractMatrices(int rows, int cols, int matrix1[MAX_SIZE][MAX_SIZE], int matrix2[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

void transposeMatrix(int rows, int cols, int matrix[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[j][i] = matrix[i][j];
        }
    }
}

int main()
{
    int rows, cols;

    printf("Enter the number of rows and columns for the matrices: ");
    scanf("%d %d", &rows, &cols);

    int matrix1[MAX_SIZE][MAX_SIZE], matrix2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];

    printf("\nEnter details for the first matrix:\n");
    inputMatrix(rows, cols, matrix1);

    printf("\nEnter details for the second matrix:\n");
    inputMatrix(rows, cols, matrix2);

    printf("\nMatrix 1:\n");
    outputMatrix(rows, cols, matrix1);

    printf("\nMatrix 2:\n");
    outputMatrix(rows, cols, matrix2);

    // Addition
    addMatrices(rows, cols, matrix1, matrix2, result);
    printf("\nAddition Result:\n");
    outputMatrix(rows, cols, result);

    // Subtraction
    subtractMatrices(rows, cols, matrix1, matrix2, result);
    printf("\nSubtraction Result:\n");
    outputMatrix(rows, cols, result);

    // Transpose of Matrix 1
    transposeMatrix(rows, cols, matrix1, result);
    printf("\nTranspose of Matrix 1:\n");
    outputMatrix(cols, rows, result);

    return 0;
}

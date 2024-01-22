<<<<<<< HEAD
#include <stdio.h>

// Function to add two matrices
void addMatrices(int mat1[][2], int mat2[][2], int result[][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            *(*(result + i) + j) = *(*(mat1 + i) + j) + *(*(mat2 + i) + j);
        }
    }
}

// Function to display a matrix
void displayMatrix(int mat[][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", *(*(mat + i) + j));
        }
        printf("\n");
    }
}

int main()
{
    int mat1[2][2], mat2[2][2], result[2][2];

    // Input for the first matrix
    printf("Enter elements of matrix 1 (2x2):\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input for the second matrix
    printf("Enter elements of matrix 2 (2x2):\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Adding matrices using the function
    addMatrices(mat1, mat2, result);

    // Displaying the result
    printf("\nResultant Matrix:\n");
    displayMatrix(result);

    return 0;
}
=======
#include <stdio.h>

// Function to add two matrices
void addMatrices(int mat1[][2], int mat2[][2], int result[][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            *(*(result + i) + j) = *(*(mat1 + i) + j) + *(*(mat2 + i) + j);
        }
    }
}

// Function to display a matrix
void displayMatrix(int mat[][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", *(*(mat + i) + j));
        }
        printf("\n");
    }
}

int main()
{
    int mat1[2][2], mat2[2][2], result[2][2];

    // Input for the first matrix
    printf("Enter elements of matrix 1 (2x2):\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input for the second matrix
    printf("Enter elements of matrix 2 (2x2):\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Adding matrices using the function
    addMatrices(mat1, mat2, result);

    // Displaying the result
    printf("\nResultant Matrix:\n");
    displayMatrix(result);

    return 0;
}
>>>>>>> 25e55dbf70ba4f39a9c7a653c3b76f27bc22e516

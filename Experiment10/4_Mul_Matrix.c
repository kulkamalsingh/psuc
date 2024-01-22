<<<<<<< HEAD
#include <stdio.h>

void multiplyMatrices(int (*matrix1)[2], int (*matrix2)[2], int (*result)[2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            *(*(result + i) + j) = 0;
            for (int k = 0; k < 2; k++)
            {
                *(*(result + i) + j) += *(*(matrix1 + i) + k) * *(*(matrix2 + k) + j);
            }
        }
    }
}

void displayMatrix(int (*matrix)[2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", *(*(matrix + i) + j));
        }
        printf("\n");
    }
}

int main()
{
    int matrix1[2][2] = {{1, 2}, {3, 4}};
    int matrix2[2][2] = {{5, 6}, {7, 8}};
    int result[2][2];

    multiplyMatrices(matrix1, matrix2, result);

    printf("Matrix 1:\n");
    displayMatrix(matrix1);

    printf("\nMatrix 2:\n");
    displayMatrix(matrix2);

    printf("\nResult Matrix:\n");
    displayMatrix(result);

    return 0;
}
=======
#include <stdio.h>

void multiplyMatrices(int (*matrix1)[2], int (*matrix2)[2], int (*result)[2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            *(*(result + i) + j) = 0;
            for (int k = 0; k < 2; k++)
            {
                *(*(result + i) + j) += *(*(matrix1 + i) + k) * *(*(matrix2 + k) + j);
            }
        }
    }
}

void displayMatrix(int (*matrix)[2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", *(*(matrix + i) + j));
        }
        printf("\n");
    }
}

int main()
{
    int matrix1[2][2] = {{1, 2}, {3, 4}};
    int matrix2[2][2] = {{5, 6}, {7, 8}};
    int result[2][2];

    multiplyMatrices(matrix1, matrix2, result);

    printf("Matrix 1:\n");
    displayMatrix(matrix1);

    printf("\nMatrix 2:\n");
    displayMatrix(matrix2);

    printf("\nResult Matrix:\n");
    displayMatrix(result);

    return 0;
}
>>>>>>> 25e55dbf70ba4f39a9c7a653c3b76f27bc22e516

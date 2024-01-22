<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLS 4

void displayArray(int **arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    // Allocate memory for a 2D array using double pointer
    int **array = (int **)malloc(ROWS * sizeof(int *));
    for (int i = 0; i < ROWS; i++)
    {
        array[i] = (int *)malloc(COLS * sizeof(int));
    }

    // Initialize the array with values
    int count = 1;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            array[i][j] = count++;
        }
    }

    // Display the array using the double pointer
    printf("Original Array:\n");
    displayArray(array, ROWS, COLS);

    // Deallocate memory for the array
    for (int i = 0; i < ROWS; i++)
    {
        free(array[i]);
    }
    free(array);

    return 0;
}
=======
#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLS 4

void displayArray(int **arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    // Allocate memory for a 2D array using double pointer
    int **array = (int **)malloc(ROWS * sizeof(int *));
    for (int i = 0; i < ROWS; i++)
    {
        array[i] = (int *)malloc(COLS * sizeof(int));
    }

    // Initialize the array with values
    int count = 1;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            array[i][j] = count++;
        }
    }

    // Display the array using the double pointer
    printf("Original Array:\n");
    displayArray(array, ROWS, COLS);

    // Deallocate memory for the array
    for (int i = 0; i < ROWS; i++)
    {
        free(array[i]);
    }
    free(array);

    return 0;
}
>>>>>>> ef4bbe9638c6b5c58b44ad809acc5d12f8327d51

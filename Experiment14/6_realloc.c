// 6. Write C program to create dynamic array and re - size array using realloc() function.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *dynamic_array;
    int size, new_size, i;

    // Ask the user for the initial size of the dynamic array
    printf("Enter the initial size of the dynamic array: ");
    scanf("%d", &size);

    // Allocate memory for the dynamic array
    dynamic_array = (int *)malloc(size * sizeof(int));

    // Check if memory allocation was successful
    if (dynamic_array == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Fill the dynamic array with values
    printf("Enter %d elements for the dynamic array:\n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &dynamic_array[i]);
    }

    // Display the contents of the dynamic array
    printf("Contents of the dynamic array:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", dynamic_array[i]);
    }
    printf("\n");

    // Ask the user for the new size of the dynamic array
    printf("Enter the new size of the dynamic array: ");
    scanf("%d", &new_size);

    // Resize the dynamic array using realloc
    dynamic_array = (int *)realloc(dynamic_array, new_size * sizeof(int));

    // Check if memory reallocation was successful
    if (dynamic_array == NULL)
    {
        printf("Memory reallocation failed.\n");
        return 1;
    }

    // Fill the additional space in the resized array
    printf("Enter %d additional elements for the dynamic array:\n", new_size - size);
    for (i = size; i < new_size; i++)
    {
        scanf("%d", &dynamic_array[i]);
    }

    // Display the contents of the resized dynamic array
    printf("Contents of the resized dynamic array:\n");
    for (i = 0; i < new_size; i++)
    {
        printf("%d ", dynamic_array[i]);
    }
    printf("\n");

    // Free the dynamically allocated memory
    free(dynamic_array);

    return 0;
}

// 5. Write C program to create dynamic array using calloc() function.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *dynamic_array;
    int size, i;

    // Ask the user for the size of the dynamic array
    printf("Enter the size of the dynamic array: ");
    scanf("%d", &size);

    // Allocate memory for the dynamic array using calloc
    dynamic_array = (int *)calloc(size, sizeof(int));

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

    // Free the dynamically allocated memory
    free(dynamic_array);

    return 0;
}

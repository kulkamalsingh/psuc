// 3.	Write C program to define a macro that receives an array and the number of elements in the array as arguments.
//  Write a C program for using this macro to print the elements of the array.

#include <stdio.h>

// Macro to print the elements of an array
#define PRINT_ARRAY(arr, size)         \
    do                                 \
    {                                  \
        printf("Array elements: ");    \
        for (int i = 0; i < size; ++i) \
        {                              \
            printf("%d ", arr[i]);     \
        }                              \
        printf("\n");                  \
    } while (0)

int main()
{
    // Define an array
    int myArray[] = {1, 2, 3, 4, 5};
    int numElements = sizeof(myArray) / sizeof(myArray[0]);

    // Use the macro to print the array
    PRINT_ARRAY(myArray, numElements);

    return 0;
}

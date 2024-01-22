#include <stdio.h>

// Function to swap two arrays using pointers
void swapArrays(int *arr1, int *arr2, int size)
{
    for (int i = 0; i < size; i++)
    {
        // Using a temporary variable to swap elements
        int temp = *(arr1 + i);
        *(arr1 + i) = *(arr2 + i);
        *(arr2 + i) = temp;
    }
}

// Function to print an array
void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main()
{
    int size;

    // Input size of arrays
    printf("Enter the size of arrays: ");
    scanf("%d", &size);

    // Declare and input elements for the first array
    int arr1[size];
    printf("Enter elements for the first array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // Declare and input elements for the second array
    int arr2[size];
    printf("Enter elements for the second array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // Display original arrays
    printf("\nOriginal arrays:\n");
    printf("Array 1: ");
    printArray(arr1, size);
    printf("Array 2: ");
    printArray(arr2, size);

    // Swap arrays using pointers
    swapArrays(arr1, arr2, size);

    // Display arrays after swapping
    printf("\nArrays after swapping:\n");
    printf("Array 1: ");
    printArray(arr1, size);
    printf("Array 2: ");
    printArray(arr2, size);

    return 0;
}

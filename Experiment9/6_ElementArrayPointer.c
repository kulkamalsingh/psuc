#include <stdio.h>

// Function to search for an element in an array using pointers
int searchElement(int *arr, int size, int key)
{
    int *ptr = arr; // Pointer to the first element of the array

    for (int i = 0; i < size; i++)
    {
        if (*ptr == key)
        {
            return i; // Return the index if the element is found
        }
        ptr++; // Move the pointer to the next element
    }

    return -1; // Return -1 if the element is not found
}

int main()
{
    int size, key;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    int result = searchElement(arr, size, key);

    if (result != -1)
    {
        printf("Element %d found at index %d\n", key, result);
    }
    else
    {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}

#include <stdio.h>

// Function to reverse an array using pointers
void reverseArray(int *arr, int size)
{
    int *start = arr;          // Pointer to the beginning of the array
    int *end = arr + size - 1; // Pointer to the end of the array

    while (start < end)
    {
        // Swap elements pointed by start and end
        int temp = *start;
        *start = *end;
        *end = temp;

        // Move pointers towards each other
        start++;
        end--;
    }
}

int main()
{
    int size;

    // Input: Size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input: Elements of the array
    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Reverse the array using pointers
    reverseArray(arr, size);

    // Output: Reversed array
    printf("Reversed array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

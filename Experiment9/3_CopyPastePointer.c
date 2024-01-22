#include <stdio.h>

void copyArray(int *source, int *destination, int size)
{
    for (int i = 0; i < size; i++)
    {
        *(destination + i) = *(source + i);
    }
}

int main()
{
    int sourceArray[] = {1, 2, 3, 4, 5};
    int destinationArray[5]; // Destination array with the same size

    int size = sizeof(sourceArray) / sizeof(sourceArray[0]);

    // Copying the array using pointers
    copyArray(sourceArray, destinationArray, size);

    // Displaying the copied array
    printf("Source Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", sourceArray[i]);
    }

    printf("\nCopied Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", destinationArray[i]);
    }

    return 0;
}

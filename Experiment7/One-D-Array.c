#include <stdio.h>

// Function prototypes
int findMinimum(int arr[], int size);
int findMaximum(int arr[], int size);
int findSumOfArray(int arr[], int size);

int main()
{
    // Maximum size of the array
    const int maxSize = 100;

    // Declare an array
    int arr[maxSize];

    // Variable to store the size of the array
    int size;

    // Read the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Read array elements from the user
    printf("Enter the array elements:\n");
    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Print the entered array
    printf("Entered array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Call functions to find minimum, maximum, and sum
    int min = findMinimum(arr, size);
    int max = findMaximum(arr, size);
    int sum = findSumOfArray(arr, size);

    // Print the results
    printf("Minimum element in the array: %d\n", min);
    printf("Maximum element in the array: %d\n", max);
    printf("Sum of elements in the array: %d\n", sum);

    return 0;
}

// Function to find the minimum element in the array
int findMinimum(int arr[], int size)
{
    int min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

// Function to find the maximum element in the array
int findMaximum(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

// Function to find the sum of elements in the array
int findSumOfArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

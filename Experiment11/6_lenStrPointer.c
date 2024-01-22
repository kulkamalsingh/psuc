#include <stdio.h>

// Function to find the length of a string using pointers
int findStringLength(const char *str)
{
    const char *ptr = str; // Initialize a pointer to the beginning of the string

    // Iterate through the string until the null terminator is reached
    while (*ptr != '\0')
    {
        ptr++;
    }

    // Calculate the length by subtracting the initial pointer position from the current position
    return (int)(ptr - str);
}

int main()
{
    char inputString[100];

    // Get input from the user
    printf("Enter a string: ");
    scanf("%s", inputString);

    // Find and print the length of the string
    int length = findStringLength(inputString);
    printf("Length of the string: %d\n", length);

    return 0;
}

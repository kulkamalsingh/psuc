#include <stdio.h>
#include <stdlib.h>

void modifyString(char **strPtr)
{
    // Modifying the string through the double pointer
    *strPtr = "Hello, Modified!";
}

int main()
{
    // Declare a pointer to a pointer to a char (double pointer)
    char **stringPtr;

    // Declare a string
    char *originalString = "Hello, World!";

    // Assign the address of the original string to the double pointer
    stringPtr = &originalString;

    // Print the original string using double pointer
    printf("Original String: %s\n", *stringPtr);

    // Modify the string using the double pointer
    modifyString(stringPtr);

    // Print the modified string using double pointer
    printf("Modified String: %s\n", *stringPtr);

    return 0;
}

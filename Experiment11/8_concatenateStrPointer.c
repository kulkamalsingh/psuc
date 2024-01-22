#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to concatenate two strings using pointers
char *concatenateStrings(const char *str1, const char *str2)
{
    // Calculate the length of the concatenated string
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int totalLen = len1 + len2;

    // Allocate memory for the concatenated string
    char *result = (char *)malloc((totalLen + 1) * sizeof(char));

    // Check if memory allocation was successful
    if (result == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    // Copy the first string to the result
    strcpy(result, str1);

    // Use pointer arithmetic to move to the end of the result string
    char *ptr = result + len1;

    // Copy the second string to the end of the result
    strcpy(ptr, str2);

    return result;
}

int main()
{
    // Example strings
    const char *string1 = "Hello, ";
    const char *string2 = "world!";

    // Concatenate strings using pointers
    char *concatenatedString = concatenateStrings(string1, string2);

    // Display the result
    printf("Concatenated String: %s\n", concatenatedString);

    // Free the memory allocated for the concatenated string
    free(concatenatedString);

    return 0;
}

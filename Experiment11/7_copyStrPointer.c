#include <stdio.h>

void copyString(char *source, char *destination)
{
    // Iterate through each character in the source string
    while (*source != '\0')
    {
        // Copy the current character to the destination string
        *destination = *source;

        // Move to the next character in both strings
        source++;
        destination++;
    }

    // Add null character at the end of the destination string
    *destination = '\0';
}

int main()
{
    char sourceString[] = "Hello, World!";
    char destinationString[50]; // Make sure the destination buffer is large enough

    // Copy the string using the copyString function
    copyString(sourceString, destinationString);

    // Print the original and copied strings
    printf("Source String: %s\n", sourceString);
    printf("Copied String: %s\n", destinationString);

    return 0;
}

#include <stdio.h>

void copyString(char destination[], const char source[])
{
    int i = 0;

    // Copy characters from source to destination until null character is encountered
    while (source[i] != '\0')
    {
        destination[i] = source[i];
        i++;
    }

    // Null-terminate the destination string
    destination[i] = '\0';
}

int main()
{
    // Define source and destination strings
    char sourceString[100];
    char destinationString[100];

    // Get input from the user
    printf("Enter a string: ");
    scanf("%s", sourceString);

    // Call the function to copy the string
    copyString(destinationString, sourceString);

    // Display the result
    printf("Original String: %s\n", sourceString);
    printf("Copied String: %s\n", destinationString);

    return 0;
}

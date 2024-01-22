#include <stdio.h>
#include <string.h>

int main()
{
    char firstString[50];   // Assuming maximum length of the first string is 50
    char secondString[50];  // Assuming maximum length of the second string is 50
    char resultString[100]; // Assuming maximum length of the result string is 100

    // Input the first string
    printf("Enter the first string: ");
    fgets(firstString, sizeof(firstString), stdin);
    firstString[strcspn(firstString, "\n")] = '\0'; // Remove newline character if present

    // Input the second string
    printf("Enter the second string: ");
    fgets(secondString, sizeof(secondString), stdin);
    secondString[strcspn(secondString, "\n")] = '\0'; // Remove newline character if present

    // Concatenate the strings
    strcpy(resultString, firstString);
    strcat(resultString, secondString);

    // Display the result
    printf("Concatenated string: %s\n", resultString);

    return 0;
}

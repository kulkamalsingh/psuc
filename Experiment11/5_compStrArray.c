#include <stdio.h>
#include <string.h>

int compareStrings(char str1[], char str2[])
{
    // Using strcmp function from string.h to compare strings
    int result = strcmp(str1, str2);

    if (result == 0)
    {
        return 0; // Strings are equal
    }
    else if (result < 0)
    {
        return -1; // str1 is lexicographically less than str2
    }
    else
    {
        return 1; // str1 is lexicographically greater than str2
    }
}

int main()
{
    char str1[100], str2[100];

    // Input first string
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    // Input second string
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters from the input strings
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Compare strings and display the result
    int result = compareStrings(str1, str2);

    if (result == 0)
    {
        printf("Both strings are equal.\n");
    }
    else if (result < 0)
    {
        printf("First string is lexicographically less than the second string.\n");
    }
    else
    {
        printf("First string is lexicographically greater than the second string.\n");
    }

    return 0;
}

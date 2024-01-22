#include <stdio.h>

int compareStrings(const char *str1, const char *str2)
{
    while (*str1 != '\0' && *str2 != '\0')
    {
        if (*str1 != *str2)
        {
            return 0; // Strings are not equal
        }
        str1++;
        str2++;
    }

    // Check if both strings have reached the end simultaneously
    return (*str1 == '\0' && *str2 == '\0');
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

    // Compare strings using pointers
    if (compareStrings(str1, str2))
    {
        printf("Strings are equal.\n");
    }
    else
    {
        printf("Strings are not equal.\n");
    }

    return 0;
}

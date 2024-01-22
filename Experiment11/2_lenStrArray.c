#include <stdio.h>

int main()
{
    // Declare a string array
    char str[100];

    // Input a string from the user
    printf("Enter a string: ");
    gets(str);

    // Calculate the length of the string using a loop
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }

    // Print the length of the string
    printf("Length of the string: %d\n", length);

    return 0;
}

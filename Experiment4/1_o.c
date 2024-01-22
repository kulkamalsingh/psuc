#include <stdio.h>

int main()
{
    int decimalNumber;
    int octalNumber;

    // Input decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);
    // Input octal number
    printf("Enter an octal number: ");
    scanf("%o", &octalNumber);

    // Convert decimal to octal and print the result
    printf("Octal equivalent: %o\n", decimalNumber);

    // Convert octal to decimal and print the result
    printf("Decimal equivalent: %d\n", octalNumber);

    return 0;
}

#include <stdio.h>

int main()
{
    int number, sum = 0, digit;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate the sum of digits
    while (number > 0)
    {
        // Extract the last digit
        digit = number % 10;

        // Add the digit to the sum
        sum += digit;

        // Remove the last digit from the number
        number /= 10;
    }

    // Display the result
    printf("The sum of the digits is: %d\n", sum);

    return 0;
}

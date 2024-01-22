#include <stdio.h>

void addNumbers(int *num1, int *num2, int *result)
{
    *result = *num1 + *num2;
}

int main()
{
    int number1, number2, sum;

    // Input first number
    printf("Enter first number: ");
    scanf("%d", &number1);

    // Input second number
    printf("Enter second number: ");
    scanf("%d", &number2);

    // Function call to add numbers using pointers
    addNumbers(&number1, &number2, &sum);

    // Display the result
    printf("Sum: %d\n", sum);

    return 0;
}

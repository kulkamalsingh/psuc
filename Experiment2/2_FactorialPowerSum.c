#include <stdio.h>

// Function declarations
long long factorial(int n);
long long power(int x, int y);
int sumOfDigits(int num);

int main()
{
    int choice;

    do
    {
        // Display menu
        printf("\nMenu:\n");
        printf("1. Factorial\n");
        printf("2. X to the power Y\n");
        printf("3. Addition of digits\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            int num;
            printf("Enter a number to find factorial: ");
            scanf("%d", &num);
            printf("Factorial of %d is %lld\n", num, factorial(num));
            break;
        }
        case 2:
        {
            int base, exponent;
            printf("Enter base (X): ");
            scanf("%d", &base);
            printf("Enter exponent (Y): ");
            scanf("%d", &exponent);
            printf("%d to the power %d is %lld\n", base, exponent, power(base, exponent));
            break;
        }
        case 3:
        {
            int num;
            printf("Enter a number to find the sum of digits: ");
            scanf("%d", &num);
            printf("Sum of digits of %d is %d\n", num, sumOfDigits(num));
            break;
        }
        case 4:
            printf("Exiting program. Goodbye!\n");
            break;
        default:
            printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 4);

    return 0;
}

// Function to calculate factorial of a number
long long factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

// Function to calculate X to the power Y
long long power(int x, int y)
{
    long long result = 1;
    while (y > 0)
    {
        result *= x;
        y--;
    }
    return result;
}

// Function to calculate the sum of digits of a number
int sumOfDigits(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

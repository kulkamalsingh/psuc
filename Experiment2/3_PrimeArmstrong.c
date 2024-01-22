#include <stdio.h>
#include <math.h>

// Function to check whether a number is prime
int isPrime(int num)
{
    if (num <= 1)
    {
        return 0; // Not a prime number
    }

    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return 0; // Not a prime number
        }
    }

    return 1; // Prime number
}

// Function to check whether a number is Armstrong
int isArmstrong(int num)
{
    int originalNum = num;
    int sum = 0, digit;

    while (num > 0)
    {
        digit = num % 10;
        sum += pow(digit, 3); // For a 3-digit Armstrong number
        num /= 10;
    }

    return (sum == originalNum);
}

int main()
{
    int choice, num;

    do
    {
        // Display the menu
        printf("\nMenu:\n");
        printf("1. Check Prime\n");
        printf("2. Check Armstrong\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            // Check Prime
            printf("Enter a number: ");
            scanf("%d", &num);
            if (isPrime(num))
            {
                printf("%d is a prime number.\n", num);
            }
            else
            {
                printf("%d is not a prime number.\n", num);
            }
            break;

        case 2:
            // Check Armstrong
            printf("Enter a number: ");
            scanf("%d", &num);
            if (isArmstrong(num))
            {
                printf("%d is an Armstrong number.\n", num);
            }
            else
            {
                printf("%d is not an Armstrong number.\n", num);
            }
            break;

        case 3:
            // Exit the program
            printf("Exiting program.\n");
            break;

        default:
            printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 3);

    return 0;
}

#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int is_prime(int num)
{
    if (num < 2)
    {
        return 0; // Not prime
    }
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}

// Function to check if a number is Armstrong
int is_armStrong(int num)
{
    int originalNum = num;
    int sum = 0, remainder, n = 0;

    while (originalNum != 0)
    {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        sum += pow(remainder, n);
        originalNum /= 10;
    }

    return (sum == num);
}

// Function to calculate nCr (combination)
int NCR(int n, int r)
{
    if (r == 0 || n == r)
    {
        return 1;
    }
    else
    {
        return NCR(n - 1, r - 1) + NCR(n - 1, r);
    }
}

// Function to calculate nPr (permutation)
int NPR(int n, int r)
{
    if (r == 0)
    {
        return 1;
    }
    else
    {
        return n * NPR(n - 1, r - 1);
    }
}

// Function to convert character to uppercase
char to_upper(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch - ('a' - 'A');
    }
    else
    {
        return ch;
    }
}

// Function to convert character to lowercase
char to_lower(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        return ch + ('a' - 'A');
    }
    else
    {
        return ch;
    }
}

// Function to check if character is uppercase
int is_upper(char ch)
{
    return (ch >= 'A' && ch <= 'Z');
}

// Function to check if character is lowercase
int is_lower(char ch)
{
    return (ch >= 'a' && ch <= 'z');
}

// Function to check if character is a digit
int is_digit(char ch)
{
    return (ch >= '0' && ch <= '9');
}

// Function to check if character is an alphabet
int is_alphabet(char ch)
{
    return ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'));
}

// Function to calculate power of a number
double power(double x, int y)
{
    return pow(x, y);
}

// Function to calculate factorial of a number
int factorial(int n)
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

int main()
{
    // You can test the functions here
    int num, x, y;
    printf("Enter a number :");
    scanf("%d", &num);
    printf("The Factorial of%d is%d", num, factorial(num));
    int base, exponent;
    printf("Enter base (X): ");
    scanf("%d", &base);
    printf("Enter exponent (Y): ");
    scanf("%d", &exponent);
    printf("%d to the power %d is %lld\n", base, exponent, power(base, exponent));
    return 0;
}

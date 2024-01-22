#include <stdio.h>

int factorial(int);

int main()
{
    int num;
    printf("Enter a number for you want a factorial \n");
    scanf("%d", &num);
    printf("The factorial of the number of %d is %d", num, factorial(num));

    return 0;
}

int factorial(int number)
{
    if (number == 1 || number == 0)
    {

        return 1;
    }
    else
    {
        return number * (factorial(number - 1));
    }
}
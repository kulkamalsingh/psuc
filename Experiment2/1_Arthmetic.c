#include "stdio.h"
void arthmetic();
int main()
{

    char operations;
    double n1, n2;
    arthmetic();

    return 0;
}

void arthmetic()
{
    double n1, n2;
    char operation;
    printf("Enter an operation (+, -, *, /): ");
    scanf("%c", &operation);
    printf("Enter first number :");
    scanf("%lf", &n1);
    printf("Enter second number :");
    scanf("%lf", &n2);

    switch (operation)
    {

    case '+':
        printf("Addition of numbers %.1lf + %.1lf = %.1lf", n1, n2, n1 + n2);
        break;

    case '-':
        printf("Substraction of numbers %.1lf - %.1lf = %.1lf", n1, n2, n1 - n2);
        break;

    case '*':
        printf("Multiplication of numbers %.1lf * %.1lf = %.1lf", n1, n2, n1 * n2);
        break;

    case '/':
        printf("Division of numbers %.1lf / %.1lf = %.1lf", n1, n2, n1 / n2);
        break;

    default:
        printf("error please give proper operation");
    }
}
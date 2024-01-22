#include "stdio.h"
int main()
{
    int n, i, temp = 0;
    printf("enter a number :");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        if (n % n == 0 && n % i == 0)
        {
            temp++;
        }
    }
    if (temp == 1)
    {
        printf("entered number is prime: %d", n);
    }
    else
    {
        printf("entered number is not prime: %d", n);
    }

    return 0;
}
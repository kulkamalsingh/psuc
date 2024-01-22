#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int m, n, i, rem;
    int temp = 0, countdigit = 0, sum = 0;
    printf("Enter the value from where to start :");
    scanf("%d", &n);
    printf("Enter the value till where  :");
    scanf("%d", &m);
    for (i = n; i <= m; i++)
    {

        temp = i;
        while (temp != 0)
        {
            countdigit++;
            temp = temp / 10;
        }
        temp = i;
        while (temp != 0)
        {
            rem = temp % 10;
            sum = sum + pow(rem, countdigit);
            temp = temp / 10;
        }
        if (sum == i)
        {
            printf("i=%d\n", i);
        }
        else
        {
            printf(" ");
        }
        printf("%d ", i);
    }
    return 0;
}
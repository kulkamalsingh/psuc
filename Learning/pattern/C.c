#include <stdio.h>

int main()
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (j == 0 || i == 0 && j == 1 || i == 0 && j == 2 || i == 6 && j == 1 || i == 6 && j == 2)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
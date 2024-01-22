#include <stdio.h>

int main()
{
    // float price = 1000;
    // float *ptr = &price;
    // float **pptr = &ptr;

    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;
    // int ***ppptr = &pptr;

    printf("%d\n", **pptr);
    // printf("%p\n" & pptr);
    // printf("%p\n" & ptr);
    // printf("%p\n" & i);

    return 0;
}
#include <stdio.h>
void swapbyref(int *, int *);

int main()
{

    int a = 10, b = 20;
    printf("%d %d\n", a, b);
    swapbyref(&a, &b);
    printf("%d %d\n", a, b);
}
void swapbyref(int *a, int *b)
{

    int c = *a;
    *a = *b;
    *b = c;

    printf("%d %d\n", *a, *b);
}
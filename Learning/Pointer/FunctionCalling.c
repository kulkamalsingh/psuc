#include <stdio.h>
void swapbyvalue(int, int);
void swapbyref(int *, int *);

int main()
{

    int a = 10, b = 20;

    printf("%d %d\n", a, b);
    swapbyvalue(a, b);
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

void swapbyvalue(int a, int b)
{

    int c = a;
    a = b;
    b = c;

    printf("%d %d\n", a, b);
}
#include <stdio.h>

int main()
{
    int x;
    int *ptr;

    ptr = &x;
    *ptr = 0; // 0

    printf("%d\n", x);   // 0
    printf("%d\n", ptr); // address of x

    printf("%d\n", *ptr); // 0

    *ptr += 5;

    printf("%d\n", x);   // 5
    printf("%d\n", ptr); // address of x

    printf("%d\n", *ptr); // 5

    (*ptr)++;

    printf("%d\n", x);   // 6
    printf("%d\n", ptr); // address of x

    printf("%d\n", *ptr); // 6

    *ptr++;
    printf("%d\n", x);   // 6
    printf("%d\n", ptr); // address of x increment

    printf("%d\n", *ptr); // incremented address of x

    return 0;
}
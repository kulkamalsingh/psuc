#include <stdio.h>

int main()
{
    int num = 42;
    int *ptr1 = &num;   // Pointer to an integer
    int **ptr2 = &ptr1; // Pointer to a pointer (double pointer)

    // Display the values
    printf("Value of num: %d\n", num);
    printf("Value pointed to by ptr1: %d\n", *ptr1);
    printf("Value pointed to by ptr2 (double pointer): %d\n", **ptr2);

    // Modify the value through the double pointer
    **ptr2 = 100;

    // Display the modified values
    printf("\nAfter modifying through double pointer:\n");
    printf("Value of num: %d\n", num);
    printf("Value pointed to by ptr1: %d\n", *ptr1);
    printf("Value pointed to by ptr2 (double pointer): %d\n", **ptr2);

    return 0;
}

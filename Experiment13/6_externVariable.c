// 6. Write C program to illustrate the properties of an extern variable.

#include <stdio.h>

// Declaration of extern variable
extern int externVar;

int main()
{
    // Access the extern variable
    printf("Extern variable inside main: %d\n", externVar);

    // Modify the extern variable
    externVar = 20;
    printf("Modified extern variable inside main: %d\n", externVar);

    // Call another function
    anotherFunction();

    return 0;
}

#include <stdio.h>

// Declaration of extern variable
extern int externVar;

// Function using extern variable
void anotherFunction()
{
    // Access the extern variable
    printf("Extern variable inside anotherFunction: %d\n", externVar);
}

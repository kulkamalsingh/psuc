// 7. Write C program to illustrate the properties of a register variable.

#include <stdio.h>

int main()
{
    // Define register variables
    register int regVar1 = 10;
    register int regVar2 = 20;

    // Print the values of register variables
    printf("Register variable 1: %d\n", regVar1);
    printf("Register variable 2: %d\n", regVar2);

    // Modify the register variable
    regVar1 += 5;
    regVar2 *= 2;

    // Print the modified values of register variables
    printf("Modified register variable 1: %d\n", regVar1);
    printf("Modified register variable 2: %d\n", regVar2);

    return 0;
}

// 5. Write C program to illustrate the properties of an auto variable.

#include <stdio.h>

// Function to demonstrate the properties of auto variables
void demoAuto()
{
    // Auto variable
    int autoVar = 10;

    // Print the value of auto variable
    printf("Auto variable inside function: %d\n", autoVar);

    // Modify the auto variable
    autoVar += 5;
    printf("Modified auto variable inside function: %d\n", autoVar);
}

int main()
{
    // Call the function
    demoAuto();

    // Accessing autoVar here will cause a compilation error because it's out of scope

    return 0;
}

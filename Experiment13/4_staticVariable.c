// 4. Write C program to illustrate the properties of a static variable.

#include <stdio.h>

// Function to demonstrate the properties of static variables
void demoStatic()
{
    // Static variable retains its value between function calls
    static int staticVar = 0;

    // Increment the static variable
    staticVar++;

    // Print the value of the static variable
    printf("Static variable inside function: %d\n", staticVar);
}

int main()
{
    // Call the function multiple times to observe the properties of static variables
    for (int i = 0; i < 3; i++)
    {
        printf("Function call: %d\n", i + 1);
        demoStatic();
    }

    return 0;
}

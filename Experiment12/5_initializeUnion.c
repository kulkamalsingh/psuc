// Write C program to declare, initialize a union, example of union

#include <stdio.h>

// Define a union for storing either an integer or a float
union Data
{
    int intValue;
    float floatValue;
};

int main()
{
    // Declare a union variable
    union Data data;

    // Initialize the union with an integer value
    data.intValue = 10;

    // Access and print the integer value
    printf("Integer Value: %d\n", data.intValue);

    // Initialize the union with a float value
    data.floatValue = 25.5;

    // Access and print the float value
    printf("Float Value: %.2f\n", data.floatValue);

    // Access and print the integer value again (now it's overwritten by the float value)
    printf("Integer Value: %d\n", data.intValue);

    return 0;
}

// Write C program to use typedef for creating structure and union.

#include <stdio.h>

// Define a typedef for the structure
typedef struct
{
    char name[50];
    int employeeID;
    float salary;
} Employee;

// Define a typedef for the union
typedef union
{
    int intValue;
    float floatValue;
} Data;

int main()
{
    // Using typedef for structure
    Employee emp;
    printf("Size of typedef structure Employee: %lu bytes\n", sizeof(emp));

    // Using typedef for union
    Data data;
    printf("Size of typedef union Data: %lu bytes\n", sizeof(data));

    return 0;
}

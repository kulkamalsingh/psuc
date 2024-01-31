// Write C program to show different between structure and union

#include <stdio.h>

// Define a structure for storing employee details
struct Employee
{
    char name[50];
    int employeeID;
    float salary;
};

// Define a union for storing either an integer or a float
union Data
{
    int intValue;
    float floatValue;
};

int main()
{
    // Structure Example
    struct Employee emp;
    printf("Size of structure Employee: %lu bytes\n", sizeof(emp));

    // Union Example
    union Data data;
    printf("Size of union Data: %lu bytes\n", sizeof(data));

    return 0;
}

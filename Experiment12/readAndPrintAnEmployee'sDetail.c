// Write C program to read and print an employee's detail using structure.

#include <stdio.h>

// Define the structure for Employee
struct Employee
{
    char name[50];
    int employeeID;
    float salary;
};

int main()
{
    // Declare a structure variable
    struct Employee emp;

    // Read employee details
    printf("Enter employee name: ");
    scanf("%s", emp.name);

    printf("Enter employee ID: ");
    scanf("%d", &emp.employeeID);

    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);

    // Print employee details
    printf("\nEmployee Details:\n");
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.employeeID);
    printf("Salary: %.2f\n", emp.salary);

    return 0;
}

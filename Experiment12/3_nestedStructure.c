// Write C program to demonstrate example of nested structure

#include <stdio.h>

// Define structure for Address
struct Address
{
    char street[50];
    char city[50];
    char state[50];
};

// Define structure for Employee
struct Employee
{
    char name[50];
    int employeeID;
    float salary;
    struct Address address; // Nested structure
};

int main()
{
    // Declare a structure variable of type Employee
    struct Employee emp;

    // Read employee details
    printf("Enter employee name: ");
    scanf("%s", emp.name);

    printf("Enter employee ID: ");
    scanf("%d", &emp.employeeID);

    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);

    printf("Enter employee's address (street city state): ");
    scanf("%s %s %s", emp.address.street, emp.address.city, emp.address.state);

    // Print employee details
    printf("\nEmployee Details:\n");
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.employeeID);
    printf("Salary: %.2f\n", emp.salary);
    printf("Address: %s, %s, %s\n", emp.address.street, emp.address.city, emp.address.state);

    return 0;
}

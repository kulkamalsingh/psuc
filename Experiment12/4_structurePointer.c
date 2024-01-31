// Write C program to demonstrate example structure pointer(structure with pointer).

#include <stdio.h>
#include <stdlib.h> // Required for dynamic memory allocation

// Define structure for Student
struct Student
{
    char name[50];
    int age;
    float marks;
};

int main()
{
    // Declare a structure pointer of type Student
    struct Student *ptrStudent;

    // Allocate memory dynamically for one structure
    ptrStudent = (struct Student *)malloc(sizeof(struct Student));

    // Check if memory allocation was successful
    if (ptrStudent == NULL)
    {
        printf("Memory allocation failed\n");
        return 1; // Exit program with error code
    }

    // Read student details using structure pointer
    printf("Enter student name: ");
    scanf("%s", ptrStudent->name);

    printf("Enter student age: ");
    scanf("%d", &(ptrStudent->age));

    printf("Enter student marks: ");
    scanf("%f", &(ptrStudent->marks));

    // Print student details using structure pointer
    printf("\nStudent Details:\n");
    printf("Name: %s\n", ptrStudent->name);
    printf("Age: %d\n", ptrStudent->age);
    printf("Marks: %.2f\n", ptrStudent->marks);

    // Free dynamically allocated memory
    free(ptrStudent);

    return 0;
}

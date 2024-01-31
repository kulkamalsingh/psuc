// Write C program to demonstrate example of structure of array

#include <stdio.h>

// Define a structure for storing student details
struct Student
{
    char name[50];
    int age;
    float marks;
};

int main()
{
    // Define an array of structures
    struct Student students[3]; // Assuming we have 3 students

    // Input student details
    for (int i = 0; i < 3; i++)
    {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        printf("\n");
    }

    // Display student details
    printf("Student Details:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    return 0;
}

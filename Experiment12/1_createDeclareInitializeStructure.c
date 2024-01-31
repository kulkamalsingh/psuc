// Write C program to create, declare and initialize structure

#include <stdio.h>

// Define the structure
struct Person
{
    char name[50];
    int age;
    float height;
};

int main()
{
    // Declare and initialize a structure variable
    struct Person person1 = {"John", 30, 5.9};

    // Accessing and printing structure members
    printf("Person's Name: %s\n", person1.name);
    printf("Person's Age: %d\n", person1.age);
    printf("Person's Height: %.2f\n", person1.height);

    return 0;
}
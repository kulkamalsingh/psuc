#include <stdio.h>

int main()
{
    // Declare variables
    int age;
    char gender, smoker;
    double insuranceAmount;

    // Input age, gender, and smoker status
    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter gender (M/F): ");
    scanf(" %c", &gender);

    printf("Is the person a smoker? (Y/N): ");
    scanf(" %c", &smoker);

    // Calculate insurance amount based on age
    if (age >= 21 && age <= 30)
    {
        insuranceAmount = 10000;
    }
    else if (age >= 31 && age <= 40)
    {
        insuranceAmount = 15000;
    }
    else if (age >= 41 && age <= 50)
    {
        insuranceAmount = 20000;
    }
    else if (age >= 51 && age <= 60)
    {
        insuranceAmount = 40000;
    }
    else
    {
        printf("Insurance not possible for the given age.\n");
        return 0; // Exit the program
    }

    // Apply discounts and increases based on gender and smoker status
    if (gender == 'F' || gender == 'f')
    {
        // 10% discount for females
        insuranceAmount *= 0.90;
    }

    if (smoker == 'Y' || smoker == 'y')
    {
        // 10% increase for smokers
        insuranceAmount *= 1.10;
    }

    // Display the calculated insurance amount
    printf("Insurance amount: %.2f\n", insuranceAmount);

    return 0;
}

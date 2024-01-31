// 1. Write C program to define the math operator ‘+’ as PLUS, ‘-‘ as
//  MINUS, ‘*’ as MULT & ‘/’ as DIVIDE using pre - processor directives
// and do the operations over variables(x, y)
// defined on above question like z = x PLUS y.

#include <stdio.h>

#define PLUS(x, y) ((x) + (y))
#define MINUS(x, y) ((x) - (y))
#define MULT(x, y) ((x) * (y))
#define DIVIDE(x, y) ((y) != 0 ? (x) / (y) : printf("Error: Division by zero\n"))

int main()
{
    int x = 10, y = 5, z;

    // Perform operations using defined macros
    z = PLUS(x, y);
    printf("x PLUS y = %d\n", z);

    z = MINUS(x, y);
    printf("x MINUS y = %d\n", z);

    z = MULT(x, y);
    printf("x MULT y = %d\n", z);

    z = DIVIDE(x, y);
    printf("x DIVIDE y = %d\n", z);

    // Trying division by zero
    z = DIVIDE(x, 0);

    return 0;
}

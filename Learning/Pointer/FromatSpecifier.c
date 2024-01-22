#include <stdio.h>

int main()
{

    int age = 22;
    int *ptr = &age;

    // address

    printf("%p\n", &age); // %p gives value in hexadecimal
    printf("%u\n", &age); // we use %u unsigned integer for better understanding
    printf("%u\n", ptr);
    printf("%u\n", &ptr);

    // value

    printf("%d\n", age);
    printf("%d\n", *ptr);
    printf("%d\n", *(&age));

    return 0;
}
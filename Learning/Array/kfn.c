// #include<stdio.h>
#include <string.h>
int main()
{
    // input
    char str[40], temp;
    printf("enter the string : ");
    gets(str);
    puts(str);
    // calculate value
    int k = 0, count = 0;
    while (str[k] != '\0')
    {
        count++;
        k++;
    }
    // reverse string
    for (int i = 0; i < count; i++)
    {
        temp = str[i];
        str[i] = str[count - 1 - i];
        str[count - 1 - i] = temp;
    }
    puts("reverse string is : ");
    puts(str);
        return 0;
}
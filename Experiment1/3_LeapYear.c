#include"stdio.h"
int main(){

int i;

printf("enter a year :");
scanf("%d",&i);

if (i%4==0){
    printf("given year '%d' is LEAP Year",i);
}else{
    printf("given year '%d' is NOT a Leap Year",i);
}


    return 0;
}
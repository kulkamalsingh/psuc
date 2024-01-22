#include"stdio.h"

int main(){

//int num1=12;
//int num2=14;
int num1,num2,num3;

printf("enter number 1=>");
scanf("%d",&num1);
printf("enter number 2=>");
scanf("%d",&num2);
printf("enter number 3=>");
scanf("%d",&num3);

if(num1>num2){
printf("%d is greater",num1);

}if(num2>num3){

    printf("%d is greater",num2);
}else{
    printf("%d is greater",num3);
}
printf("\n");
printf("%x %x %x",&num1,&num2,&num3);
return 0;
}
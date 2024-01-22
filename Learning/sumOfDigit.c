#include"stdio.h"
int main(){
int n=0,sum=0,temp=0;
printf("enter the number :");
scanf("%d",&n);
while(n!=0){
    temp=n%10;
    n=n/10;
    sum=sum+temp;


}printf("%d",sum);

    return 0;
}
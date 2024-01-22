#include"stdio.h"

int main(){
    int i;
    printf("enter a number :");
    scanf("%d",&i);
    if(i%2==0){
        printf("number '%d' is even",i);
    }else{
        printf("number '%d' is odd",i);
    }
}
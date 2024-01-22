#include"stdio.h"

int main(){

    int data[10]={1,2,3,4,5,6,7,66,8,8};
    int d=0;

    for(int i=0;i<9;i++){
        for(int j=i+1;j<10;j++)
        if(data[i]==data[j]){
            printf("the address of dublicate no is %d and %d index",data[i],j+1);
            d=1;

        }
    } 
    if(d==0){
        printf("not found");
    }
    return 0;
}
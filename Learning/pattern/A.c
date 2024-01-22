#include<stdio.h>

int main()
{
    for(int i=0;i<7;i++){
        for(int j=0;j<7;j++){
            if(i+j==3 ||j-i==3 || i==2 && j==3){
                printf("*");
            }
            else{
                printf(" ");
            }
           
        } printf("\n");
    }
    return 0;
}
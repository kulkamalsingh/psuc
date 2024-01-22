#include<stdio.h>

int main()
{
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(j==0 ||i<3 && i==j ||i==1 && j==3 ||j==4){
                printf("*");
            }
            else{
                printf(" ");
            }
           
        } printf("\n");
    }
    return 0;
}
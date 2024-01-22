#include"stdio.h"

int main(){

    int data[12]={1,2,3,4,5,6,7,8,9,10};
    int index,value;
    int N=10;
    printf("enter position to insert value=>");
    scanf("%d",&index);
    printf("enter value to insert=>");
    scanf("%d",&value);
    printf("array value before insert=> ");
    for (int i=0;i<N;i++){
        printf("%d ",data[i]);
    }
        for(int i=N+1; i>index;i--){
            data[i]=data[i-1];
        }
        data[index]=value;
        N++;

        printf("\n Array value after insert=> ");
        for(int i=0;i<N+1;i++){
            printf("%d ",data[i]);
        }
 return 0;       
    }

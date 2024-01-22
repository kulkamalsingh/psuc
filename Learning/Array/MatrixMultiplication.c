#include<stdio.h>

int main(){
    int m,n,sum=0;
    int a[4][5], b[5][6],result[4][6];

    printf("Enter the first matrix  of 4*5\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <5; j++)
        {
            scanf("%d",&a[i][j]);
            // printf("\t");
        }
        // printf("\n");
        
    }

    printf("Enter the second matrix of 5*6 \n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <6; j++)
        {
            scanf("%d",&b[i][j]);
            // printf("\t");
        }
        // printf("\n");
    
        
    }
    
    printf("Result of the matrix in 4*6 \n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <6; j++)
        {
            for (int k = 0; k < 5; k++)  // k till n-1
            {
                sum += a[i][k] * b[k][j];
                
            }
            result[i][j]=sum;
                sum=0;
            
        }
        
    }

   
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <6; j++)
        {
           printf("%d ",result[i][j]);
           printf("\t");
           
            
        }
        printf("\n");
    }



    return 0;
}
#include<stdio.h>
int main()
{
    int a[2][3],b[3][4],result[2][4],sum=0;
    printf("Enter the element of the first matrix :\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("First Matrix :- \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the element of the second matrix :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d",&b[i][j]);
        }
        
    }
    printf("Secomd Matrix :- \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%3d",b[i][j]);
        }
        printf("\n");
    }
    printf("Multiplication of the matrix :\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                sum+=a[i][k]*b[k][j];
            }
            result[i][j]=sum;
            sum=0;
            
        }
        
    }
    printf("Resultant Matrix is :\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%3d",result[i][j]);
        }
        printf("\n");
    }
    
    
    
    
    return 0;
}
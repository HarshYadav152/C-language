#include<stdio.h>
int main()
{
    int a[3][2]={{1,2},{4,2},{6,9}};
    int sum=0;
    printf("Given Matrix : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%3d",a[i][j]);
            sum=sum+a[i][j];
        }
        printf("\n");
    }
    printf("Sum of all element of the matrix is %d",sum);
    return 0;
}
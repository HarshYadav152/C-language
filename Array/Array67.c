#include<stdio.h>
int main()
{
    int a[3][3]={{1,2,7},{2,0,4},{3,4,5}},temp;
    int trans[3][3];
    printf("Given Matrix is :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
    printf("Matrix after Transpose :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            trans[j][i]=a[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%3d",trans[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (trans[i][j]==a[i][j])
            {
                printf("The Matrix is symmetric :\n");
                break;
            }
            else if(trans[i][j]!=a[i][j])
            {
                printf("Given Matrix is not symmetric :\n");
            }
        }    
    }
    return 0;
}
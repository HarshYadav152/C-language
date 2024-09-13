#include<stdio.h>
int main()
{
    int a[3][3]={{1,2,3},{5,6,8},{5,9,0}},temp;
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
    return 0;
}
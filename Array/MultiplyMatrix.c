#include <stdio.h>
int main()
{
    int m, n, sum=0;
    int a[2][3], b[3][2], result[2][2];
    printf("Enter the values of 1st matrix :\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the %d %d element in the matrix\n", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("First matrix is :\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }


    printf("Enter the values of 2nd matrix :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the %d %d element in the matrix\n", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("Second matrix is :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%4d",b[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            // calculate resultant matrix
            for (int k = 0; k < 3; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }
    printf("Resultant matrix :\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            // print the resultant matrix
            printf("%4d", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
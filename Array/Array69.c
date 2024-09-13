#include <stdio.h>
int main()
{
    int a[2][3] = {{2, 3, 0}, {2, 3, 4}}; // first matrix
    int b[2][3] = {{4, 3, 1}, {4, 6, 8}}; // second matrix
    int sum[2][3];
    int s = 0;
    printf("First Matrix is :\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }
    printf("Second Matrix is :\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%3d", b[i][j]);
        }
        printf("\n");
    }
    printf("Sum of two matrix is :\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            s = a[i][j] + b[i][j];
            sum[i][j] = s;
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%3d", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int a[3][3] = {{1, 1, 5}, {3, 7, 5}, {3, 6, 7}};
    int sum = 0, sum1 = 0;
    printf("Given Matrix is :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%3d", a[i][j]);
            if (i == j)
            {
                sum += a[i][j];
            }
        }
        sum1 += a[i][3 - i - 1];
        printf("\n");
    }
    printf("Sum of main diagonal element is : %d\n", sum);
    printf("Sum of off diagonal element is : %d\n", sum1);
    return 0;
}
#include <stdio.h>
int main()
{
    int marks[2][3]={{11,22,33},{44,55,66}}; /*declaration woth initilization*/
    int marks2[2][3]={{3,4,5},{1,2,3}};
    // int marks[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            // printf("\nValue of 2d array %d %d : %3d", i, j, marks[i][j]);
            printf("%4d",marks[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            // printf("\nValue of 2d array %d %d : %3d", i, j, marks[i][j]);
            printf("%4d",marks2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
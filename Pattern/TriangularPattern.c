// Triangular star pattern

// *
// **
// ***
// ****

// Reverse triangular star pattern

// ****
// ***
// **
// *

#include <stdio.h>

void starpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}

void reversestarpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= rows - i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}
int main()
{
    int rows, ch;
    printf("Enter your choice \n 0 for Star Pattern\n 1 for Rerverse Str Pattern\n");
    scanf("%d", &ch);
    if (ch == 0)
    {
        printf("How many rows do you want :");
        scanf("%d", &rows);
        starpattern(rows);
    }
    else if (ch == 1)
    {
        printf("How many rows do you want :");
        scanf("%d", &rows);
        reversestarpattern(rows);
    }
    else
        printf("wrong input");

    return 0;
}

//
// int main()
// {
//     int rows;
//     printf("How many rows do you want :");
//     scanf("%d",&rows);
//     starpattern(rows);
//     return 0;
// }
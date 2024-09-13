#include <stdio.h>
// int main()
// {
//     // int row;
//     // printf("Enter no. of rows : ");
//     // scanf("%d",&row);
//     for (int i = 1; i < 5; i++)
//     {
//         for (int j = 5; j > i; j--)
//         {
//             // printf("%d",j);
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
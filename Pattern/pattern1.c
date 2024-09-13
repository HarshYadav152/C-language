#include<stdio.h>
int main()
{
    int i,j;
    for (int i = 1; i < 5; i--) 
    {
        for (int j = i; j > i; j--)
        {
            printf("%d",j);
        }
        // printf("%d",j);
    }
    
    return 0;
}
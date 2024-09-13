#include<stdio.h>
int main()
{
    int f=1,i;
    printf("\nEnter a no. to find its factorial :");
    scanf("\n%d",&i);
    for (f=1; i>0; i--)
    {
        f=f*i;
    }
    // do
    // {
    //     f=f*i;
    //     i=i-1;
    // } while (i>0);
    // while (i>0)
    // {
    //     f=f*i;
    //     i--;
    // }
    
    
    printf("\nFactorial of a given no. is : %d",f);
return 0;
} 
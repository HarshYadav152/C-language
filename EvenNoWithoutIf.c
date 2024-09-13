#include<stdio.h>
// int main()
int main()
{
    int i,e,s=0;
    for ( i = 2; i < 400; i++)
    {
       e=i%2;
    switch (e==0)
    {
    case 1:
        printf("\nEven no. is : %d",i);
        s=s+i;
        break;
    default:
        break;
    }
    }
    printf("\nTotal sum of all even no. is : %d",s);
    return 0;
}
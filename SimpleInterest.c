#include<stdio.h>
int main()
{
    int p,r,t,i;
    float si;
    for (i=0;i<5;i++)
    {
        
    printf("\nCalculate Simple Interest :");
    printf("\nEnter the Rate :");
    scanf("\n%d",&r);
    printf("\nEnter the Principal :");
    scanf("\n%d",&p);
    printf("\nEnter the Time :");
    scanf("\n%d",&t);
    si=(p*r*t)/100;
    printf("\nSimple interest is : %f ",si);
    }
return 0; 
    
    
}
#include<stdio.h>
int main()
{
    int *p1,*p2,a,b,c,d;
    a=100;
    b=250;
    p1=&a;
    p2=&b;
    c=*p2+*p1/10;
    d=50* *p2/ *p1-20;
    printf("\nAddres of a : %u",p1);
    printf("\nAddres of b : %u",p2);
    printf("\nValue 1 = %d\tValue 2 = %d\nValue 3 = %d\tValue 4 = %d",a,b,c,d);
    return 0;
}
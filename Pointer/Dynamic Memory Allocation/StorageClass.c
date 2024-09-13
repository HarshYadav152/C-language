#include<stdio.h>
#include"harsh.c"
// int sum;
int myfunc(int a ,int b)
{
    extern int sum;
    // int sum;
    // sum=a+b;
    return sum;
}

// extern int sum = 23;
int main()
{
    // Declaration - telling the compiler about the variable (no space reserved)
    // Definition - Declaration + Space Reserved

    register int sum = myfunc(2,3);
    // int sum=89;
    printf("The sum is : %d",sum);
    return 0;
}
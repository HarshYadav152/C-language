#include<stdio.h>

int sum(int a ,int b)
{
    return a+b;
}
int main()
{
    printf("The sum of 1 and 2 is %d\n",sum(1,2)); //only for testing function
    int (*fptr)(int,int); /*declaring a function pointer*/
    fptr=&sum;/*Creating a function pointer*/ 
    int d=(*fptr)(2,4); //since fptr points sum() so this function execute

    printf("The value of d is %d",d);
    return 0;
}
#include<stdio.h>
int main()
{
    int a=12;
    int* ptr; //This is a wild pointer
    // *ptr=32; //This is not a good thing
    ptr=&a; //ptr is no longer a wild pointer
    printf("THe value of a is %d",*(ptr));
    return 0;
}
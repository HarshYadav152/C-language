#include <stdio.h>
int main()
{
    int a = 10;
    float b = 3.4;
    // char h[6] = "harsh";
    void *ptr;
    ptr = &a;
    printf("The value of a is %d\n", *((int *)ptr));
    ptr = &b;
    printf("The value of b is %f\n", *((float *)ptr));
    // ptr = &h[6];
    // printf("The value of h is %s", *((char *)ptr));
    return 0;
}
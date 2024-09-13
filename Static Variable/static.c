#include<stdio.h>

int function()
{
    static int h=0;
    printf("The value of h is %d\n",h);
    h++;
    return h;
}
int main()
{
    function();
    function();
    function();
    function();
    return 0;
}
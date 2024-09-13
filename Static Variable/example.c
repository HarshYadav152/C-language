#include <stdio.h>

int b=1000; //This is global variale since it is declared inside main()
int fun(int b1)
{
    static int myvar = 0;  //after one time execution of programm myvar value will be increased to myvar++
    printf("The value of myvar is %d\n",myvar);
    myvar++;
    // printf("The value of b inside fun is %d",b);
    // printf("The address of b inside fun is %d",&b);
    return b1+myvar;
}
int main()
{
    int b = 10; // b is the local variable inside main() it can't be print outside the main 
    int val = fun(b);
    val = fun(b);
    val = fun(b);
    val = fun(b);
    int *ptr = &val;
    // printf("\n");
    // printf("The address of b inside main is %d\n",&b);
    // printf("The value is %d ", val);
    return 0;
}
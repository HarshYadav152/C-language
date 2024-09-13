#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

void greethallo(int (*fptr)(int, int))
{
    printf("Hello User\n");
    printf("The sum of 2 and 4 is %d\n", fptr(2, 4));
}

void greetGoodMorning(int (*fptr)(int, int))
{
    printf("Good morning\n");
    printf("The sum of 2 and 4 is %d\n", fptr(2, 4));
}
int main()
{
    int (*ptr)(int, int);
    ptr = &sum;
    // ptr=sum; //both are same

    greetGoodMorning(ptr);
    greethallo(ptr);

    return 0;
}
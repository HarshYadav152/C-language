#include <stdio.h>
int main()
{
    int a = 34;
    // int* ptr=NULL;
    // int *ptr = &a;
    int *ptr;
    if (ptr != NULL)
    {
        printf("The address of a is : %d", *ptr);
    }
    else
    {
        printf("The pointer is NULL thus it can't be dereference");
    }

    return 0;
}
#include<stdio.h>
int main()
{
    printf("Lets start about pointer: \n");
    int a=29;
    int *ptr=&a;
    // int *ptr2=NULL;
    int *ptr2;
    printf("The address of pointer to a is : %p\n",&ptr);
    printf("The address of a is :%p\n",&a);
    printf("The address of a is :%p\n",ptr);
    printf("The value of a is : %d\n",*ptr);
    printf("The value of a is : %d\n",a);

    printf("Address of some garbage : %p\n",ptr2);
    // printf("Address of null pointer : %p\n",ptr2);
    return 0;
}
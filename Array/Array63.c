#include <stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int pos, ele;

    printf("Elements of the array\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    }

    printf("Enter the postion at which element is inserted : ");
    scanf("%d",&pos);
    // printf("Enter the element to be inserted : ");
    // scanf("%d",&ele);

    a[pos]=NULL;
    printf("Element after inserted :\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}
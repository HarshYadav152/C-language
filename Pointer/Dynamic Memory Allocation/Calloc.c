#include <stdio.h>
#include<stdlib.h>
int main()
{
    // use of calloc
    int *ptr, n;
    printf("Enter the size of array :");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element in the array :");
        scanf("%d", &ptr[i]);
    }
    // if we put above for loop code in comment and we see the value initialized is 0
    for (int i = 0; i < n; i++)
    {
        printf("value in the array : %d\n",ptr[i]);
    }

    return 0;
}
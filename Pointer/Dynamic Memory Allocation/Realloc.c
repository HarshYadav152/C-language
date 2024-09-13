#include <stdio.h>
#include <stdlib.h>
int main()
{
    // use of calloc
    int n;
    printf("Enter the size of array :");
    scanf("%d", &n);
    int *ptr;
    ptr = (int *)calloc(3, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Element : ");
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("value : %d\n", ptr[i]);
    }

    // use of realloc
    printf("Enter new size of array :");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr, n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Element : ");
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("value : %d\n", ptr[i]);
    }
    // free up memory
    free(ptr);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
int main()
{
    // Use of malloc()
    int *ptr;
    int n;
    // printf("Enter the size of the array you want :");
    // scanf("%d",&n);
    ptr = (int *)malloc(3 * sizeof(int));
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the value in the array :");
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("The value in array : %d\n",ptr[i]);
    }
    // agar hum array ke sixe se jayda index pe value print karenge to hamein garbage value dega as shown in above for loop
    
    return 0;
}
#include <stdio.h>
int main()
{
    int arr[5] = {2, 4, 5, 3, 6};
    int temp=0;
    printf("Array After Reversal\n");
    for (int i = 0; i < 5; i++)
    {
        temp = arr[i];
        arr[i] = arr[i - 1];
        temp=arr[i];

        printf("Elememt %d is %d\n", i, arr[i]);
    }

    return 0;
}
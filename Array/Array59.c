#include <stdio.h>
int main()
{
    int n,even=0;
    printf("Enter how many element in your array :");
    scanf("%d",&n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d index element in the array :",i);
        scanf("%d",&arr[i]);
    }

    for (int j = 0; j < n; j++)
    {
        if (arr[j]%2==0)
        {
            even=even+arr[j];
        }
        printf("Value in the array at %d index : %d\n",j,arr[j]);
        
    }
    printf("Sum of even numbers is %d",even);    
     
    return 0;
}
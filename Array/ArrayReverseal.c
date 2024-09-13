#include<stdio.h>
void arrRev(int array[])
{
    // we use here swapping of two element
    int temp;
    for (int i = 0; i < 5/2; i++)
    {
        temp=array[i];
        array[i]=array[6-i];
        array[6-i]=temp;
    }
    
}
void arrayPrint(int array[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("%3d",array[i]);
    }

}
int main()
{
    int arr[]={1,2,3,4,5};
    printf("\n");
    arrayPrint(arr);
    printf("\n");
    arrRev(arr);
    printf("Array after Reversal is :");
    arrayPrint(arr);
   
    return 0;
}
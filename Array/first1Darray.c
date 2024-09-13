#include<stdio.h>
int main()
{
    int marks[5]={1,2,3,4,5}; /*declaration with initialisation*/
    int i;
    // for (i=0; i < 5; i++)
    // {
    //     printf("\nEnter the %d element of an array :\n",i);
    //     scanf("%d",&marks[i]);
    // }
    for (i=0; i < 5; i++)
    {
        printf("\nValue of %d element of array %d \n",i,marks[i]);
    }

    // marks[0]=10;
    // printf("\nMarks of 1 student is %d",marks[0]);
    // marks[0]=20;
    // marks[1]=20;
    // marks[2]=20;
    // marks[3]=20;
    // printf("\nMarks of 1 student is %d",marks[0]);
        

    return 0;
}
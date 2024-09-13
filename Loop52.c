#include <stdio.h>
void main()
{
    int i, num, a, even=0, odd=0;
    printf("\nEnter a 5 digit no. <=32678 :");
    scanf("%d", &num);
    while (num > 0)
    {
        a = num % 10;
        if (a % 2 == 0)
        {
            even = even + a;
        }
        else
        {
            odd = odd + a;
        }
        num = num / 10;
    }
    printf("\nSum of even no. is : %d ",even);
    printf("\nSum of odd no. is : %d ",odd);

    // return 0;
}
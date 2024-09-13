#include<stdio.h>
#include<math.h>

int main()
{
    int binary;
    int decimal,power_sum = 0,last_digit,i = 0;
    printf("Enter the binary number : ");
    scanf("%d",&binary);
    while (binary > 0)
    {
        last_digit = binary % 10;
        power_sum = power_sum + last_digit*pow(2,i);
        binary = binary / 10;
        i++;
    }
    printf("Decimal equivalent is : %d",power_sum);
    return 0;
}
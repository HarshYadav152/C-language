#include <stdio.h>
int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}
int main()
{
    int num;
    printf("\nEnter a no. to find the factorial of :");
    scanf("%d", &num);
    printf("\nFactorial of %d is %d ", num, factorial(num));
    return 0;
}
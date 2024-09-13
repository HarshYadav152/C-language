#include <stdio.h>

int reverse(int s)
{
    int sum = 0, r;
    while (s > 0)
    {
        r = s % 10;
        sum = sum * 10 + r;
        s = s / 10;
    }
    return sum;
}
int main()
{
    // printf("Harsh yadav");
    int decimal = 6;
    int binary, remainder, s = 0;
    while (decimal > 0)
    {
        remainder = decimal % 2;
        s = s * 10 + remainder;
        decimal = decimal / 2;
    }
    // printf("%d", reverse(s));
    printf("%d", s);

    return 0;
}
#include<stdio.h>

int main()
{
    char a[80],*p;
    int i;
    printf("Enter string : ");
    gets(a);
    p = a;
    for (;*p; p++)
    {
        if (*p >= 65 && *p<= 90)
        {
            *p += 32;
        }
        else if (*p >= 97 && *p <= 122)
        {
            *p -= 32;
        }
    }
    puts(a);        
    return 0;
}
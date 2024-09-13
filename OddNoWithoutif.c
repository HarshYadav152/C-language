#include <stdio.h>
int main()
{
    int i, o, s = 0;
    for (i = 1; i < 200; i++)
    {
        o = i % 2;
        switch (o == 1)
        {
        case 1:
            printf("Odd no. is : %d\n", i);
            s = s + i;
            break;

        default:
            break;
        }
    }
    printf("Sum is :%d",s);

    return 0;
}
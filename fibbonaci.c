#include <stdio.h>
int main()
{
    long int i,n1=0,n2=1,n3,num;
    printf("\nEnter a no. :");
    scanf("%ld",&num);
    printf("\n %ld %ld ",n1,n2);
    for ( i = 0; i < (num-2); i++)
    {
        n3=n1+n2;
        printf("%ld ",n3);
        n1=n2;
        n2=n3;
    }

    return 0;
}
// int fib_rec(int x)
// {
//     int n;
//     if (n== 0 && n == 1)
//     return n;
//     else
//         return (fib_rec(n - 1) +fib_rec(n - 2));
// }
// int main()
// {
//     printf("%d ",fib_rec(10));
// }
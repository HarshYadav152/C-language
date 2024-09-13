#include <stdio.h>
int main()
{
    // typedef previous_name alias_name ;
    // we give alias name of any keyword for which we can use this name in our program

    typedef unsigned long ul;
    ul a, b, c; // here we can use ul in our program instead of unsigned long

    // it is just like to give the nick name to the previous

    // typedef int i;
    // i n = 3;
    // printf("Value of n is %d", n);
    int *i, j;
    // here only a is integer pointer while b is integer
    typedef int *intpointer;
    intpointer k,l;
    int z;
    k=&z;
    l=&z;
    // now a and b both are integer pointer

    return 0;
}
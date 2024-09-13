#include <stdio.h>
#include <stdlib.h>

int *funDangling()
{
    int a, b, s;
    a = 23;
    b = 21;
    s = a + b;
    return &s;
}
int main()
{
    // Case 1: Deallocation of a memory block

    int *ptr = (int *)malloc(7 * sizeof(int));
    ptr[0] = 13;
    ptr[1] = 32;
    ptr[2] = 44;
    ptr[3] = 65;

    free(ptr); // ptr now a dangling pointer

    // Case 2: Function returning local variable address

    int *dangPtr = funDangling();

    // Case 3: if a variable goes out of scope

    int *danglingptr3;
    {  //scope of block start
        int a = 23;
        danglingptr3 = &a;
    }  //scope of block end
    // here variable (a) goes out of scope which means danlingptr3 is pointing to location which is freed and hence danglingptr3 is now a dangling pointer
    return 0;
}
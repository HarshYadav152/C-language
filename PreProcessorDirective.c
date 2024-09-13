#include <stdio.h>
// #include"Loop52.c"  //we can use this file in this program

#define pi 3.14 // we use pi value using #define

#define square(r) r *r // creating a macros like a function

int main()
{
    printf("The value of pie is %f\n", pi);
    printf("The area of circle is %f\n", pi * square(3));

    //predefined macros
    printf("The file name is %s\n",__FILE__);   
    printf("Current Time is %s\n",__TIME__);
    printf("Current Date is %s\n",__DATE__);
    printf("Line no. is %d\n",__LINE__);
    printf("ANSI : %d\n",__STDC__);
 
    return 0;

}


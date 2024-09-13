#include<stdio.h>
#include<string.h>
union student
{
    int id;
    float marks;
    char name[20];

} ;

int main()
{

    union student s1;
    s1.marks=12.3;
    s1.id=10;
    strcpy(s1.name,"harsh");
    // here memory equal to 34byte is shared between with union members and which one is available at a time is seen on the screen

    printf("The id is %d\n",s1.id);
    printf("The marks is %d\n",s1.marks);
    printf("The name is %s\n",s1.name);
    return 0;
}
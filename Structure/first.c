#include<stdio.h>
#include<string.h>
typedef struct Student
{
    int id;
    int marks;
    char fav_char; 
    char name[20]; 
} std;

// struct Student Harsh, Asif, Abhinav;  Now these are become the global variable or argument
// void print()
// {
//     printf("%s",Harsh.name);
// }
int main()
{ 
    struct Student Harsh, Asif, Abhinav;
    Harsh.id=01;
    Asif.id=02;
    Abhinav.id=03;
    Harsh.marks=300; 
    Asif.marks=388;
    Abhinav.marks=323;
    Harsh.fav_char='H';
    Asif.fav_char='A';
    Abhinav.fav_char='A';

    strcpy(Harsh.name,"Harsh Yadav");

    printf("Harsh got %d marks \n",Harsh.marks);
    printf("Harsh name is %s\n",Harsh.name);

    // print();
    return 0;
}
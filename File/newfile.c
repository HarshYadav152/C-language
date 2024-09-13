#include<stdio.h>

int main()
{
    FILE* ptr;
    char string[30];
    ptr = fopen("harsh.txt","r");
    // fscanf(ptr,"%s",string);
    fgets(string,30,ptr);
    printf("%s",string);

    // fclose(ptr);
    // char name[10];
    // FILE *fptr;
    // fptr = fopen("harsh.txt","w");

    // printf("Enter the name : ");
    // gets(name);

    // fputs(name,fptr);

    return 0;
}
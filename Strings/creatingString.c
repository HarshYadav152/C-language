#include<stdio.h>

void printstr(char str[])
{
    int i=0;
    while (str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
    // puts(str);
    
}
int main()
{
    // char str[7]="harsh";
    // char str[]={'h','a','r','s','h','\0'};

    // enter by user
    char str[10];
    gets(str);
    printf("Using printf \n%s\n",str);
    printf("Using puts \n");
    puts(str);
    printf("Using custom function printstr \n");
    printstr(str);
    return 0;
}
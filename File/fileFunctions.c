#include<stdio.h>
int main()
{
    FILE *ptr=NULL;
    char string[12]="Money";
    // char string[34];

    // reading a file
    // ptr=fopen("myfile.txt","r");
    // fscanf(ptr,"%s",string);
    // printf("The content of this file is : %s\n",string);

    // Writing in to file
    ptr=fopen("myfile.txt","w");
    fscanf(ptr,"%s",string);

    // fclose(ptr);

    return 0;
}
#include<stdio.h>

int main()
{
    FILE* ptr;
    char string[20];
    char string1[20] = "Harsh";

    char harsh[20];

    // printf("Enter the name : ");
    // puts("Enter the name");
    // gets(string);

    // creating and writing to the file
    // ptr = fopen("myfile.txt","w"); // create file if doesnot exist
    // fputs(string,ptr);

    // printf("%s",string);
    // // reading from the file
    ptr = fopen("myfile.txt","r");  // read from the file
    fgets(harsh,20,ptr); // reading the content from the file

    puts(harsh);
    printf("%s",harsh);   

    // fclose(ptr);
    return 0;
}
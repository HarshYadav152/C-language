#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("myfile.txt", "r");
    // char c = fgetc(ptr);  //reading from file character by character
    // printf("The character i read %c\n", c);
    // c = fgetc(ptr);
    // printf("The character i read %c\n", c);

    char str[7];
    fgets(str,6,ptr);  //reading from file given character as a string 
    printf("The string is %s\n",str);
    
    // ptr = fopen("myfile.txt", "w");
    // fputc('o',ptr);  //writing into file character by character 
    // fputs("Harsh Yadav",ptr);  //writing into file as string


    // ptr = fopen("myfile.txt", "r+");
    // // in r+ mode it write into the beginning of the file
    // fputc('o',ptr);  //writing into file character by character 
    // fputs("Harsh Yadav",ptr);  //writing into file as string


    // ptr = fopen("myfile.txt", "w+");
    // // in w+ mode it write into the file first delete all the content
    // fputc('o',ptr);  //writing into file character by character 
    // fputs("Harsh Yadav",ptr);  //writing into file as string



    // ptr = fopen("myfile.txt", "a+");
    // // in a+ mode it write into the file append its content
    // fputc('o',ptr);  //writing into file character by character 
    // fputs("Harsh Yadav",ptr);  //writing into file as string
    // fclose(ptr);

    return 0;
}
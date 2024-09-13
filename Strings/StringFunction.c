#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="Harsh ";
    char s2[]="Yadav";
    char s3[54];

    // it gives 0 if both string is same 
    // it gives -1 if both string s1 comes before s2 in ASCII chart 
    // it gives 1 if both string s2 comes in ASCII chart after s1
    printf("The strcmp for s1 ,s2 returned %d\n ",strcmp(s1,s2));

    // it add strings s1 and s2 and s1's length is length of s1 + length of s2
    // puts(strcat(s1,s2));
    printf("The length of s1 is %d\n",strlen(s1));

    // it gives length of s2 string
    printf("The length of s2 is %d\n",strlen(s2));

    // it reverse the given string
    printf("The reverse string of s2 is %s\n",strrev(s2));
    
    // it copy the content of contate s1 and s2 in s3
    strcpy(s3,strcat(s1,s2));
    puts(s3);
    return 0;
}
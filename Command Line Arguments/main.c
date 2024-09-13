#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Usage : %s <source_file> %s <destination_file>\n", argv[1],argv[2]);
        return 1;
    }
    FILE *source = fopen(argv[1],"r");
    if (source == NULL)
    {
        perror("Error opening source file");
        return 2;
    }

    FILE *destination = fopen(argv[1],"r");
    if (destination == NULL)
    {
        perror("Error opening destination file");
        // fclose(source);
        return 3;
    }

    int ch;
    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch,destination);
    }

    fclose(source);
    fclose(destination); 
    printf("File copied successfully.\n"); 

    return 0;
}
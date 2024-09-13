#include <stdio.h>
#include<stdlib.h>
int main()
{
    int a, i = 0;
    int *ptr;
    while (i < 43455)
    {
        printf("Welcome to the world of coding");
        ptr = malloc(34445 * sizeof(int));
        if (i % 100 == 0)
        {
            getchar();
        }
        i++;
        // free(ptr);
    }

    return 0;
}
#include<stdio.h>
int main()
{
    char ch;
    int a,n1,n2,s;
    printf("\nSelect your choice :\nAirthmatic \n Logical \nif airthmatic press Y/y otherwise N/n\n");
    scanf("%c",ch);
    switch ('ch')
    {
    case 'Y':
        printf("\nSelect \n1.Addition \n2. Subtraction \n");
        scanf("%d",a);
        switch (a)
        {
        case 1:
            printf("\nEnter any two no. :");
            scanf("%d%d",n1,n1);
            s=n1+n2;
            printf("\nSum is %d",s);
            break;
        
        default:
            break;
        }
        break;
    
    default:
        break;
    }
    return 0;
}
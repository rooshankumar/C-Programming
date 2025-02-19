#include<stdio.h>
int main(){

    int n,a,b,f=1,i,ch;
    printf("Enter user choice :");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1: printf("Enter any number : ");
                scanf("%d",&n);
                for(i=1;i<=n;i++)
                { printf("%d ",i);
                }
                break;
        
        case 2: printf("Enter 2 number : ");
                scanf("%d %d",&a,&b);
                n=a+b;
                printf("sum : %d ",n);
                break;
        
        case 3: printf("Enter any Number :");
                scanf("%d",&n);
                for(i=1;i<=n;i++)
                {
                    f=f*i;
                }
                printf("Factorial = %d ",f);
                break;

        default : printf("Invalid User Choice");
                  break;
    }
    return 0;
}
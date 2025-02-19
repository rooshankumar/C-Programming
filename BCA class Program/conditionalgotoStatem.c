#include<stdio.h>
int main(){
    int a,b;
    printf("enter two numbers :");
    scanf("%d%d",&a,&b);

    if(a>b)
    goto first;
    else 
    goto second;

    first:
    printf("\n %d",a);
    goto last;

    second:
    printf("\n %d",b);
    goto last;

    last :
    printf("\n out from goto");
    

    return 0;
}
#include<stdio.h>

int fact(int num);

void main(){
    int num, f;
    printf("\n Enter number :");
    scanf("%d",&num);
    f = fact(num);
    printf("\n Factorial = %d",f);
}

int fact(int num)
{
    int i,fact=1;
    for(i=1;i<=num;i++){
        fact = fact * i;
    }
    return fact;
}

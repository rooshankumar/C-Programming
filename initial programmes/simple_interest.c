#include<stdio.h>
int main()
{
    printf("The Roshan\n");
    
    float principle,rate,time,si;

    printf("Enter principal:");

    scanf("%f",&principle); 

    printf("Enter rate:"); 

    scanf("%f",&time);

     printf("Enter time:");

    scanf("%f",&rate);
    
    si = (principle*rate*time)/100;

    printf("Your simple interest is :%f",si);
    
    return 0;
}
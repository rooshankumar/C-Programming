#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int a =1,b=1,sum=1;
    for(int i=1;i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
         printf("The %dth Fibonacci term  is : %d\n",i,sum );
    }
   


     
    return 0;
}
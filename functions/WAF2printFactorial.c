#include<stdio.h>
int factorial (int n){
    int fact =1;
    for(int i=2;i<=n;i++){
        fact = fact*i;
    }
    return fact;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int fact = factorial(n);
    printf("The factorial of %d is %d",n,fact);

    return 0;
}
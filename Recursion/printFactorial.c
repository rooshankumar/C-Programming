#include<stdio.h>
int factorial(int n){
    if (n==1 || n==0 ) return 1; // base case
int recErsn = n*factorial(n-1);
return recErsn; 

}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int fact = factorial( n);
    printf("The factorial of %d is %d",n,fact);

    return 0;
}
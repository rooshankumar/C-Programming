#include<stdio.h>
int sum(int n){
    if (n==1 || n==0 ) return 1; // base case
int recErsn = n+sum(n-1);
return recErsn; 

}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int s = sum( n);
    printf("The sum of %d is %d",n,s);

    return 0;
}
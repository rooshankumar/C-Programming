#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
   int sum=0;
   int lastDigit = n%10;
   while(n%2!=0){
    lastDigit = n%10;
    sum = sum + lastDigit;
    n=n/10;
   }
   printf("The sum of even digits is %d",sum);

    return 0;
}
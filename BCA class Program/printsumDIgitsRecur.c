#include<stdio.h>
   
    int sumDigit(int num){
        if ( num == 0){
            return 0;
        }
    else {
        return num%10 + sumDigit(num/10);
        }
    }
    
 int main(){
    int num, sum;
    printf("Enter a number :");
    scanf("%d",&num);

    sum = sumDigit(num);
    printf("Sum of Digits : %d\n",sum);
     
    return 0;
 }
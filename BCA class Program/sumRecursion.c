#include<stdio.h>
int sumofDigits( int number){
    if( number == 0)
    return 0;
    else 
    return (number % 10 + sumofDigits(number/10));

}
int main(){
    int num ;
    printf("Enter a number :");
    scanf("%d",&num);

    int result = sumofDigits(num);
    printf("The sum of digits of %d is : %d\n",num,result);
        return 0;
}
#include<stdio.h>
int sumofDigits ( int number){
    int sum = 0;
    while(number != 0){
        sum = sum + number % 10;
        number = number/10;
    }
    return sum;
}
int main(){
    int inputNum;
    printf("Enter a number :");
    scanf("%d",&inputNum);

    int result = sumofDigits( inputNum);
    printf("The sum of digits of %d is : %d\n",inputNum,result);

    return 0;
}
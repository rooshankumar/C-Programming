#include<stdio.h>
int main(){
    int a; // operand
    scanf("%d",&a);
    char ch; // +, -, /, * --> operator
    scanf("%c",&ch);
     int b;
    scanf("%d",&b);

    switch (ch){
        case '+':
        printf("Result : %d",a+b);
        break;
        case '-':
        printf("Result : %d",a-b);
        break;
        case '*':
        printf("Result : %d",a*b);
        break;
        case '/':
        printf("Result : %f",a/b);
        break;

        default:
        printf("Invalid Operator");
    }

}

#include<stdio.h>
int main(){
    int a; // operand
    scanf("%d",&a);
    char ch; // +, -, /, * --> operator
    scanf("%c",&ch);
     int b;
    scanf("%d",&b);

    if( ch == '+')
      printf("Result : %d",a+b);

       if( ch == '-')
      printf("Result :%d",a-b);

       if( ch == '*')
      printf("Result :%d",a*b);

       if( ch == '/')
      printf("Result :%f",(float)a/b);

}
   #include<stdio.h>
   int main(){
    int num,d,sum=0,num1;
    printf("Enter a number :");
    scanf("%d",&num);

    while(num>0){
        d=num%10;
        sum=sum+d*d*d;
        num=num/10;
    }
    if(sum==num1)
    printf("The inputted number is armstrong");
    else
    printf("The inputted number is not armstrong");
    return 0;
   }
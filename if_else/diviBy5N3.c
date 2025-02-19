#include <stdio.h>
int main(){
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
     if(x%3==0 && x%5==0 ){
        printf("Yes it is divisible by 3 and 5");

     }
     // or we can write if(x%15==)
     else{
        printf("No it is not divisible by 3 and 5 ");
     }
     
    return 0;
}
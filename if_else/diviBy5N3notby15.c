#include <stdio.h>
int main(){
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);

    //  if(x%3==0 || x%5==0 ){
    //     if ( x%15!=0){
    //         printf("The number divisible by 5 or 3 but not 15:");
    //  }
    //  else{
    //     printf("The number is divisible by 15");
    //  }

    if( (x%5==0 || x%3==0) && x%15!=0){
        printf("the number is divisible by 5 or 3 but not 15");
    
     }
     else{
        printf("the number is not matching the required condition ");
     }
     
    return 0;
}
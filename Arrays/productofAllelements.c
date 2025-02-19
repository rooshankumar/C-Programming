#include<stdio.h>
int main(){
    int arr[5]= {1,2,3,4,5};
      int mul = 1;
    
    for(int i=0;i<=4;i++) {
           mul = mul * arr[i];  
    } 
          printf("sum is %d",mul);
    
    

    return 0;
}
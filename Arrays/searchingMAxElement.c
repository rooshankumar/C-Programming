#include<stdio.h>
#include<limits.h>
int main(){
    int arr[8]= {9,2,43,13,2,4,8,7};
      int max = INT_MIN;
    
    for(int i=0;i<=7;i++) {
          if(max < arr[i]) 
          max = arr[i];
    } 
          printf("max is %d",max);
    
    

    return 0;
}
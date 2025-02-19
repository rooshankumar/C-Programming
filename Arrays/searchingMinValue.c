#include<stdio.h>
int main(){
    int arr[8]= {9,2,43,13,2,4,8,7};
      int min = arr[0];
    
    for(int i=0;i<=7;i++) {
          if(min > arr[i]) 
          min = arr[i];
    } 
          printf("Minimum is %d",min);
    
    

    return 0;
}
#include<stdio.h>
#include<limits.h>
int main(){
  
    int arr[7] = {8,7,6,5,5,9,9};
    int max = INT_MIN;
    int smax = INT_MIN;
    for(int i=0;i<=6;i++){
        if(max < arr[i]){ // smax is now previous max
            smax = max; // max is now a new max
            max = arr[i];
        }
        else if( smax < arr[i] && max != arr[i]){ // max > arr[i]
            smax = arr[i];
        }
        
    }

   
   printf("%d",smax);
    return 0;
}
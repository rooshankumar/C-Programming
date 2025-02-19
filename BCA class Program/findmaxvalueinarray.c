#include<stdio.h>
int main(){
    int arr[8],i,max =1;
    printf("Enter the array elements:\n");
    for( int i=0; i<8; i++){
        scanf("%d",&arr[i]);
    }
     for( int i=0; i<8; i++){
        if(arr[i] > max)
        max = arr[i];
    }
    printf("\nThe maximum value of an array is  :%d",max);
  
    return 0;
}
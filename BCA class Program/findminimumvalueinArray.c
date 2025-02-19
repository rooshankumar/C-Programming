#include<stdio.h>
int main(){
    int arr[8],i,min ;
    printf("Enter the array elements:\n");
    for( int i=0; i<8; i++){
        scanf("%d",&arr[i]);
        min = arr[0];
    }
     for( int i=1; i<8; i++){
        if(arr[i] < min)
        min = arr[i];
    }
    printf("\nThe minimum value of an array is  :%d",min);
  
    return 0;
}
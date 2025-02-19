#include<stdio.h>
int main(){
     int arr[5] = { 5,6,8,9,1};
     int n;
     printf("Enter the number of Array :");
     scanf("%d",&n);
     printf("The unsorted Array is :");
     
     for( int i=0; i<n; i++){
        printf("%d ",arr[i]);
     }
     // bubble sort
     for(int i=0; i<n-1; i++){
        for( int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            
            }
        }
     }
     printf("\nThe Sorted Array is : ");
     for( int i=0; i<n; i++){
        printf("%d ",arr[i]);
     }
    return 0;
}
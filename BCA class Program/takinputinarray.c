#include<stdio.h>
int main(){
    int arr[8],i;
    printf("Enter the array elements:");
    for( int i=0; i<8; i++){
        scanf("%d",&arr[i]);
    }
    printf("\nInputted array is :");
    for( int i=0; i<8; i++){
        printf("%d",arr[i]);
    }
    return 0;
}
#include<stdio.h>
#define SIZE 3


void multiply( int arr[SIZE][SIZE], int brr[SIZE][SIZE],int crr[SIZE][SIZE]){

    for ( int i=0; i<SIZE; i++){
        for( int j=0; j<SIZE; j++){
             crr[i][j]=0;

            for( int k=0; k<SIZE; k++){
                crr[i][j]= crr[i][j] + arr[i][k] * brr[k][j];
            }
        }
    }
}
int main(){
    int arr[SIZE][SIZE] = {{1,2,3},{3,4,5},{5,6,7}};
    int brr[SIZE][SIZE] = {{3,2,1}, {5,4,3}, {7,6,5}};
    int crr[SIZE][SIZE];
    multiply(arr,brr,crr);
    printf("Multiplication :\n");
    for( int i=0; i<SIZE; i++){
        for(int j=0;j<SIZE; j++){
            printf(" %d ",crr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
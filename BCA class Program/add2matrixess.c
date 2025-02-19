#include<stdio.h>
int main(){
   
    int arr[3][3],  brr[3][3];

    printf("Enter the elements of 1st Matrix:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
               }
    }
    
    printf("Enter the elements of 2nd Matrix:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        scanf("%d",&brr[i][j]);
        } 
    }
      for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
          printf("%d ",arr[i][j] + brr[i][j]);
        }
        printf("\n");
      }

     
    return 0;
}
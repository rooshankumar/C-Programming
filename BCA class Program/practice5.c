#include<stdio.h>


int main(){
    int arr[5] = { 2,3,4,5,88};
    int temp = 0;

     
     printf("Orginal MAtrix\n");
     for(int i=0; i<5; i++){
         printf(" %d ",arr[i]);
     }

     for(int i=0; i<5-1;i++){
        for (int j=0; j<5-1-i; j++){
            if(arr[j]>arr[j+1])
            {int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;}
        }
       
     }
       printf("\nSorted\n\n");
      for(int i=0; i<5; i++){
            printf(" %d ",arr[i]);
         }
      

     return 0;
}
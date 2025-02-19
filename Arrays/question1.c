#include<stdio.h>
int main(){
    int i;
    int marks[4];
   for(int i=0;i<4;i++){
    printf("Enter %d number -->",i+1);
    scanf("%d",&marks[i]);
    }
    printf("Indices of marks less than 35\n");
     for(int i=0;i<4;i++){
            if(marks[i]<35) printf("%d\t",i);
        }
        printf("\n");
    
   
   

    return 0;
}
#include<stdio.h>
int main(){
    int i,j;

    for(i=5;i>=1;i--){
        int a=1;
        for(j=1;j<=i;j++){
            
            printf("%d ",a);
           
            a++;
        }
        printf("\n");
    }
    
    return 0;
}
#include<stdio.h>
int main(){
    int n,i;
    printf("Enter a number :");
    scanf("%d",&n);
   
    int nsp = n-1;
    
    for(int i=1;i<=n;i++){
       
        for(int q=1;q<=nsp;q++){ // spaces for loop
            printf(" ");
        }
        nsp--;
        for(int j=1;j<=i;j++){ // normal star no triangle
            printf("%d",j);
        }
         int a= i-1; // extra thing
        for(int k=1;k<=i-1;k++){
            printf("%d",a);
            a--;
        }
        printf("\n");
    }
         
    
    return 0;
}
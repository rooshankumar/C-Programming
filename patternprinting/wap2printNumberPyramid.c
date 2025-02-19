#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int nst=1;
    char ch ;

    for(int i=1;i<=n;i++){
        
        for(int k=1;k<=n-i;k++){ // for spaces
         printf(" ");
        }
        int a=65;
        for (int j=1;j<=nst;j++){
            char ch = (char)a;
            printf("%c",ch);
            a++;
        }
        
        nst = nst+2;
        printf("\n");
    }
    
    return 0;
}
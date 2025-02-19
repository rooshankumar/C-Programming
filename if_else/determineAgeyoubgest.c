#include <stdio.h>
int main(){
    int a;
    printf("Enter the 1st one age : ");
    scanf("%d",&a);

     int b;
    printf("Enter the 2nd one age :");
    scanf("%d",&b);

     int c;
    printf("Enter the 3rd one age :");
    scanf("%d",&c);

    if(a<b && a<c){
        printf("%d is youngest ",a);
    }

     if(b<a && b<c){
        printf("%d is youngest ",b);
    }

     if( c<a && c<b){
        printf("%d is youngest ",c);
    }

    return 0;
}
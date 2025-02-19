#include<stdio.h>
int main(){
    int x, y ;
    printf("Enter the Coordinates :");
    scanf("%d %d", &x,&y);

    if (y==0 && x==0){
        printf("Lies on origin(0,0");
    }
    else if ( x==0){
        printf("Lies on y-axis");
    }
    else if ( y==0) { 
        printf("Lies on x-axis");
    }
     else {
        printf("The point doesnot lie on x or y axis  ");
     }


    return 0;
}
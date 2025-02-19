#include<stdio.h>
int main (){
    int x1,y1,x2,y2,x3,y3;
    double m1 = (y2-y1)%(x2-x1);
    double m2 = (y3-y2)%(x3-x2);
    printf("value of x1 \n :");
    scanf("%d", &x1);

      printf("value of y1 \n :");
    scanf("%d", &y1);

      printf("value of x2\n :");
    scanf("%d", &x2);

      printf("value of y2 \n :");
    scanf("%d", &y2);

      printf("value of x3 \n :");
    scanf("%d", &x3);

      printf("value of y3 \n :");
    scanf("%d", &y3);

    printf("calculation of m1 \n:");
    scanf("%d",&m1);
    printf("calculation of m2 \n :");
    scanf("%d",&m2);

    if ( m1=m2){
        printf("fall on straight line");
    }
    else {
        printf("not fall on straight line");
    }
    
    
    return 0;
}
#include<stdio.h>
int main(){
    int m,n,p;
    printf("Enter Full marks :\n");
    scanf("%d",&m);

    printf("Enter Obtained Marks :\n");
    scanf("%d",&n);

    p = (n * 100)/m;

    printf("The obtained percentage is %d percent.",p);
    
    return 0;

}
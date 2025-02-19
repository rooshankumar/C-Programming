#include<stdio.h>
int main(){
    int a,b,c;

    printf("first number is :");
    scanf("%d",&a);

    printf("2nd number is :");
    scanf("%d",&b);

    printf("3rd number is :");
    scanf("%d",&c);

    if (a>b){
        // b is out of race
        if(a>c)
        printf("%d is greatest",a);
        else // a<c --> b<a<c
        printf("%d is greatest",c);
    }
    else { //  b>a --> a ab sabse bada to nahi hai
    if (b>c)
        printf("%d is greatest",b);
        else //c>b --. a<b<c
        printf("%d is greatest",c);
     

    }

    return 0;
}
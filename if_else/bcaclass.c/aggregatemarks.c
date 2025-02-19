#include<stdio.h>
int main(){

    float s1,s2,s3,s4,s5;
    printf("Enter the Marks :");
    scanf("%f %f %f %f %f",&s1,&s2,&s3,&s4,&s5);

    printf("\nAggregate marks : %f",s1+s2+s3+s4+s5);
    printf("\nPerecentage marks : %f",(s1+s2+s3+s4+s5)/5);
    return 0;
}
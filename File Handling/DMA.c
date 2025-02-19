#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int main(){

    // int a = sizeof(bool);
    // printf("%d",a);

    int* ptr = (int*) malloc(10*sizeof(int));
    ptr++;
    printf("%d",*ptr);

    return 0;
}
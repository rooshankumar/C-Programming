#include<stdio.h>
#include<stdlib.h>
int main(){
    int* ptr = (int*)malloc(10*4); // 00DB2A18
    printf("%p",ptr);
    ptr = realloc(ptr,200*4); // 00DB22F0
    printf("\n%p",ptr);


    return 0;
}
#include<stdio.h>
int main(){
    int arr[5] = { 2,4,6,8,1};
    arr[0] = 1; // UPDATION
    arr[1] = 3;   // UPDATION
    arr[2] = 4;
    arr[3] = 10;
    arr[4] = 2;
    printf("%d",arr[3]);

    // float a[3] = {1.2, 3.4, 5.7};
    // printf("%f",a[2]);

    // char arr[4] = { 'a','b','Y','&'};
    // printf("%c",arr[2]); 
    return 0;
}
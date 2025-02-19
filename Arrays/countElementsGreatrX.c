#include<stdio.h>
int main(){
    int arr[4] = { 4,5,8,9};
    int x = 8;
    

    for(int i=0;i<=3;i++){
        if(arr[i] > x)    printf("%d ",arr[i]);
    }

    return 0;
}
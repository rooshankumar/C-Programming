#include<stdio.h>
int main(){
    int dec, bin = 0, i=1, d, num;
    printf("Enter a decimal number :");
    scanf("%d",&dec);
    num = dec;
    while( dec>0){
        d = dec % 2;
        bin = bin + d*i;
        dec = dec/2;
        i = i*10;
    }
    printf("Binary equivalent of %d is %d",num,bin);
    
    return 0;
}
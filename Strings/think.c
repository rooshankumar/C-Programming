#include<stdio.h>
int main(){
    char str[11] = "HelloRoshan"; // automatically added '\0'
    for( int i=0; i<12; i++){
        printf("%c",str[i]);
    }
    return 0;
}
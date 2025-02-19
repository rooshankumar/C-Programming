#include<stdio.h>
int main (){
    char arr[] = {'H','I','J','K','L', '\0'};
    // char ch = '\0'; // null character \0 --> value is zero
    // int x = 0;
    // char a = (char)x;
    // printf("%c",a); // a --> '\0'
    int i = 0;
    while ( arr[i] != '\0'){
        printf("%c ",arr[i]);
        i++;
    }
    return 0;
}
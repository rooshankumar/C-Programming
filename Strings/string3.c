#include <stdio.h>
int main(){
    char arr[] = " Roshan is a BCA Student";
    // char arr[] = {'H','I','J','K','L','\0'};
    int i = 0;
    while(arr[i] != '\0'){
        printf("%c",arr[i]);
        i++;
    }

}
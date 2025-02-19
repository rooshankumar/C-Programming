#include<stdio.h>
int main(){
    // FILE* ptr = fopen("roshan.txt","r");
    // char str[100];
    // while(fgets(str,100,ptr) != NULL )
    // printf("%s",str);
    // Creating a file
    FILE* ptr = fopen("BCA.txt","w");
    char str[] = " I am a BCA Student.";
    fputs(str,ptr);
    fclose(ptr);


}
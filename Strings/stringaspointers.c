#include<stdio.h>
#include<string.h>
int main(){
   // char str[] = "Roshan";
//    char* ptr = str; // ptr now points to str[0]
//    int i =0;
//    while(*ptr != '\0'){
//     printf("%c",*ptr);
//     ptr++;
//     i++;
//    }
    char str[] = "Roshan";
    str[0] = 'D';
    printf("%s",str);

    return 0;
}

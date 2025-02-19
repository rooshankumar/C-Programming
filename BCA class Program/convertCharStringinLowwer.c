// convert 2 Lowercase
#include<stdio.h>
#include<ctype.h>
void convertLower( char *str){
    while(*str){
        *str = tolower(*str);
        str++;
    }
    
}

int main(){
    char str[100];
    printf("Enter String :  ");
    fgets(str,sizeof(str),stdin);

    convertLower( str);

    printf("The LowerCase Converted String is : %s",str);

    return 0;
}

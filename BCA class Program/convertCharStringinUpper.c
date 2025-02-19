// convert 2 Uppercase
#include<stdio.h>
#include<ctype.h>
void convertUpper( char *str){
     while(*str){
        *str = toupper(*str);
        str ++;
     }
    }
    
int main(){
    char inputString[100];
    printf("Enter String:  ");
    fgets(inputString,sizeof(inputString),stdin);
    convertUpper(inputString);

    printf("The Upper String is : %s ",inputString);
    return 0;
}
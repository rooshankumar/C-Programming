// Copy a String

#include<stdio.h>


    void copyString( char *str1,  char *str2){
        while((*str1++ = *str2++) != '\0');
    }
    int main (){
    char str1[100],str2[100];
    printf("Enter String : ");
    scanf("%s",str1);

    copyString(str2,str1);

    printf("The orginal String is: %s\n",str2);
    printf("The copied String is: %s\n",str2);
    return 0;

}
#include <stdio.h>
#include<string.h>
int main(){
    char str[40];
    printf("Enter details:\n");
     // scanf("%s",str); // --.only the 1st word will be considered
    //  scanf("%[^\n]%s",str); 
    gets(str); // entire sentence can be input
    printf("you input result is :%s",str);
    // puts(str);
 
return 0;
}
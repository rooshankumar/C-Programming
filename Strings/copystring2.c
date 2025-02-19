#include<stdio.h>
#include<string.h>
int main(){
    char s1[] = "Roshan";
   // deep copy
   char s2[] = "Roshan";
   s2[0] = 'M';

    printf("%p\n",s1);
   printf("%p",s2);
    return 0;
}

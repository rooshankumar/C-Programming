#include<stdio.h>
#include<string.h>
int main(){
   struct book{ // user defined data type
    char name[5];
    float price;
    int noOfpages;
}a,b,c ;
//    a.name = "newton";
  a.noOfpages = 232;
   a.price = 546.76;

  
  char ch[13];
  strcpy(ch,"Secret Seven");
  printf("%s",ch);
    
  
    return 0;
}
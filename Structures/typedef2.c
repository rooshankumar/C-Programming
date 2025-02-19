#include<stdio.h>
#include<string.h>
int main(){
  typedef struct Book{ // user defined data type
    char name[50];
    int noOfpages;
    float price;
    
}Book;

  Book d;
  Book a;
   
   d.noOfpages = 232;
   d.price = 546.76;
   strcpy(d.name,"Secret Seven");

   a.noOfpages = 1200;
   a.price = 1234.12;
   strcpy (a.name,"Eight");

    printf("%d\n",d.noOfpages);
   printf("%f\n",d.price);
   printf("%s\n",d.name); 
 
   printf("\n%d\n",a.noOfpages);
   printf("%f\n",a.price);
   printf("%s\n",a.name);  
    return 0;
}
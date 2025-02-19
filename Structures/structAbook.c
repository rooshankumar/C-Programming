#include<stdio.h>
#include<string.h>
int main(){
   struct book{ // user defined data type
    float price;
    int noOfpages;
    char name[50];
}a,b,c ;
   a.noOfpages = 232;
   a.price = 546.76;
   strcpy(a.name,"Secret Seven");

   b.noOfpages = 1200;
   b.price = 1234.12;
   strcpy (b.name,"Eight");
   

   
   printf("%d\n",a.noOfpages);
   printf("%f\n",a.price);
   printf("%s\n",a.name);

   printf("\n%d\n",b.noOfpages);
   printf("%f\n",b.price);
   printf("%s\n",b.name);

    
  
    return 0;
}
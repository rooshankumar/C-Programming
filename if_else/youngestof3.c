#include<stdio.h>
#include<conio.h>
void main (){

    int Ram;
    printf("The age of Ram : \n");
    scanf("%d",&Ram);

    
    int Shyam;
    printf("The age of  Shyam: \n");
    scanf("%d",&Shyam);

    
    int Ajay;
    printf("The age of Ajay : \n");
    scanf("%d",&Ajay);

    if ( Ram <= Shyam && Ram<=Ajay){
        printf("Ram is the youngest:");
    }
       if ( Shyam <= Ram && Shyam<=Ajay){
        printf("Shyam is the youngest:");
    }
       if ( Ajay <= Shyam && Ajay<=Ram){
        printf("Ajay is the youngest:");
    }
   

  


    getch();
}
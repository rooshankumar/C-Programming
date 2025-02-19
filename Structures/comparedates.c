#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct date{
        int day;
        int month;
        int year;
    } date;
    date a,b,c;

// a --> 5/12/1999
// b --> 04/10/2003
    a.day = 5;
    a.month = 12;
    a.year = 1999;
    
     c = a;
  

    b.day = 4;
    b.month = 10;
    b.year = 2003;

     bool flag = true;
    if(a.day != c.day) flag = false;
    if(a.month != c.month) flag = false;
    if(a.year != c.year) flag = false;

    if( flag == true) printf("The dates are same");
    else printf("The dates are different");

    return 0;
}
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct date{
        int day;
        int month;
        int year;
    } date;
    date a,b;
// a --> 5/12/1999
// b --> 04/10/2003
    a.day = 4;
    a.month = 10;
    a.year = 2003;

    b.day = 4;
    b.month = 10;
    b.year = 2003;

    bool flag = true;


    if(a.day != b.day) flag = false;
    if(a.month != b.month) flag = false;
    if(a.year != b.year) flag = false;

    if( flag == true) printf("The dates are same");
    else printf("The dates are different");

    return 0;
}
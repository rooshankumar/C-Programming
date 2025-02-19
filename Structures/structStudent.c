#include<stdio.h>
#include<string.h>
  typedef struct student {
        char name[15];
        int roll;
        char department [20];
        char course[20];
        int year ;

    } student;
    // function to compare departments of 2 students

    int sameDepart( student s1,student s2){
        return strcmp (s1.department, s2.department) == 0;
    }

int main(){
  
     student s1,s2;
     strcpy(s1.name,"Roshan");
     s1.roll = 29;
     strcpy(s1.department,"BCA");
     strcpy(s1.course,"CS");
     s1.year = 2023;

     strcpy(s2.name,"Kapil");
     s2.roll = 33;
     strcpy(s2.department,"Arts");
     strcpy(s2.course,"hindi");
     s2.year = 2022;

     if(sameDepart(s1,s2)) printf("Both are from the same department\n");
     else printf("Not same department.\n");

     return 0;
}
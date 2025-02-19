#include<stdio.h>
#include<string.h>
int main(){
    struct Person{
        char name[50];
        int salary;
        int age;
    }a,b;

    strcpy(a.name,"Ram");
    a.age = 32;
    a.salary = 43000;

    strcpy(b.name,"Shyam");
    b.age = 33;
    b.salary = 42000;

    printf("%s\n",a.name);
    printf("%d\n",b.age);

    return 0;
}
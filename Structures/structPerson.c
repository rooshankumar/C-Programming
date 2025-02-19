#include<stdio.h>
#include<string.h>
  typedef struct pokemon{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[15];
    } pokemon;
    void change(pokemon* p){
        (*p).hp = 70;
         // (*p).something == p->something = 70; same thing
        p->hp= 70;
        (*p).attack = 80;
        (*p).speed = 110;
        (*p).tier = 'S';
        strcpy((*p).name,"Rikachu");
        return;


    }

int main (){
    pokemon pikachu = { 60,70,100,'A',"Pikachu"};
    // pikachu.hp = 60;
    // pikachu.attack = 70;
    // pikachu.speed = 100;
    // pikachu.tier = 'A';
    // strcpy(pikachu.name,"Pikachu");

    // int*x -> address of integer values
    
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    printf("%c\n",pikachu.tier);
    printf("%s\n",pikachu.name);

    change(&pikachu);
    printf("\n%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    printf("%c\n",pikachu.tier);
    printf("%s\n",pikachu.name);

 
    return 0;
}
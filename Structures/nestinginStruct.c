#include<stdio.h>
#include<string.h>
int main (){
    typedef struct pokemon{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[15];
    } pokemon;
    typedef struct legendarypokemon{
        pokemon normal;
        char ability[10];
    } legendarypokemon;
    typedef struct godpokemon{
        legendarypokemon legend;
        int specialAttack;
    } godpokemon;
      
      godpokemon acreus;
      acreus.specialAttack = 300;
      strcpy(acreus.legend.ability,"Turns anyone into stone");
     acreus.legend.normal.attack = 500;
     acreus.legend.normal.hp = 150;
     
     
     legendarypokemon mewtwo;
    strcpy(mewtwo.ability,"Pressure");
    mewtwo.normal.hp = 150;
    mewtwo.normal.attack = 180;
    strcpy(mewtwo.normal.name);
    mewtwo.normal.speed = 180;
    mewtwo.normal.tier = 'S'; 
    return 0;
}
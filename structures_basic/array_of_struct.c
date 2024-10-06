#include <stdio.h>
#include <string.h>

typedef struct
{
    char special[28];
} Legendary;
typedef struct
{
    int attack;
    int hp;
    int speed;
    int defence;
    char name[20];
    char tier;
    Legendary legendary;
} Pokemon;
int main()
{
    Pokemon pokemon[4];
    pokemon[0].attack = 120;
    pokemon[0].hp = 100;
    pokemon[0].speed = 190;
    pokemon[0].defence = 80;
    pokemon[0].tier = 'A';
    strcpy(pokemon[0].name, "Pikachu");

    pokemon[1].attack = 190;
    pokemon[1].hp = 250;
    pokemon[1].speed = 160;
    pokemon[1].defence = 170;
    pokemon[1].tier = 'S';
    strcpy(pokemon[1].name, "Charizard");

    pokemon[2].attack = 250;
    pokemon[2].hp = 150;
    pokemon[2].speed = 200;
    pokemon[2].defence = 120;
    pokemon[2].tier = 'S';
    strcpy(pokemon[2].name, "Grininja");

    pokemon[3].attack = 250;
    pokemon[3].hp = 150;
    pokemon[3].speed = 200;
    pokemon[3].defence = 120;
    pokemon[3].tier = 'G';
    strcpy(pokemon[3].legendary.special, "Teleportation");
    strcpy(pokemon[3].name, "Mewtwo");

    for(int i = 0; i < 4; i++)
    {
        printf("Name : %s\n", pokemon[i].name);
        printf("Health : %d\n", pokemon[i].hp);
        printf("Attack : %d\n", pokemon[i].attack);
        printf("Defence : %d\n", pokemon[i].defence);
        printf("Speed : %d\n", pokemon[i].speed);
        printf("Tier : %c\n", pokemon[i].tier);
        if(pokemon[i].tier == 'G') printf("Special Ability : %s\n", pokemon[i].legendary.special);
        printf("\n");
    }
    return 0;
}
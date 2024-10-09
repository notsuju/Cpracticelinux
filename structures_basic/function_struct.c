#include <stdio.h>
#include <string.h>

typedef struct
{
    int attack;
    int hp;
    int speed;
} Pokemon;
void update(Pokemon* p)
{
    p->hp = 50;
    p->attack = 50;
    p->speed = 60;
    return;
}
int main()
{
    Pokemon pikachu = {100, 150, 130};
    update(&pikachu);
    printf("%d ", pikachu.hp);
    printf("%d ", pikachu.attack);
    printf("%d \n", pikachu.speed);
    return 0;
}

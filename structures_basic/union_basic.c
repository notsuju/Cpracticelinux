#include <stdio.h>
#include <string.h>

typedef union //used when you know you are gonna use only one element at a time and saves memory
{
    int attack;
    int speed;
    char tier;
} pokemon;
int main()
{
    pokemon pikachu;
    pikachu.attack = 100; // initializing with a value
    printf("%d ", pikachu.attack);

    pikachu.speed = 150; // initializing speed and now attack is undefined
    printf("%d %d ", pikachu.speed, pikachu.attack);

    pikachu.tier = 'A';
    printf("%d ", pikachu.tier);
    return 0;
}
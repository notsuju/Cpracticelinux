#include <stdio.h>
#include <string.h>

typedef struct
{
    int attack;
    int defence;
    char tier;
} Pokemon;
int main()
{
    Pokemon pikachu = {80, 70, 'A'};
    printf("%p\n", &pikachu.attack);
    printf("%p\n", &pikachu.defence);
    printf("%p\n", &pikachu.tier);
    return 0;
}
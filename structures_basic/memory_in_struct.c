#include <stdio.h>
#include <string.h>

typedef struct
{
    char tier;
    char test;
    int attack;
    int defence;
} Pokemon;
int main()
{
    Pokemon pikachu = {'A', 'W', 80, 70,};
    printf("%p\n", &pikachu.tier); // 1 Byte
    printf("%p\n", &pikachu.test); // 1 byte
    // then there is 2 byte padding for aligning attack(memory alignment)
    printf("%p\n", &pikachu.attack); // 4 byte
    printf("%p\n", &pikachu.defence); // 4 byte
    printf("%zu", sizeof(pikachu));
    return 0;
}
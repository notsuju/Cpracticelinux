#include <stdio.h>

struct pokemon
{
    int hp;
    int speed;
    int attack;
    char teir;
};
// struct abc
// {
//     int em;
//     char name[10];
//     float salary;
// };
int main()
{
    struct pokemon pikachu = {60,120,90,'A'};
    struct pokemon charizard = {100,80,130,'S'};
    //printf("%d\n", sizeof(struct abc));
    return 0;
}
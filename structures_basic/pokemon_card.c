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
    Pokemon pokemon[2];
    for(int i = 0; i < 2; i++)
    {
        printf("Enter the name : ");
        fgets(pokemon[i].name, sizeof(pokemon[i].name), stdin);
        size_t len = strlen(pokemon[i].name);
        if(pokemon[i].name[len - 1] == '\n') pokemon[i].name[len - 1] = '\0';

        printf("Enter the health : ");
        scanf("%d", &pokemon[i].hp);

        printf("Enter the attack : ");
        scanf("%d", &pokemon[i].attack);

        printf("Enter the speed : ");
        scanf("%d", &pokemon[i].speed);

        printf("Enter the defence : ");
        scanf("%d", &pokemon[i].defence);
        
        printf("Enter the tier : ");
        scanf(" %c", &pokemon[i].tier);
        getchar();

        if(pokemon[i].tier == 'G')
        {
            printf("Enter a special ability : ");
            fgets(pokemon[i].legendary.special, sizeof(pokemon[i].legendary.special), stdin);
            size_t len = strlen(pokemon[i].legendary.special);
            if(pokemon[i].legendary.special[len - 1] == '\n') pokemon[i].legendary.special[len - 1] = '\0';
        }

        printf("\n");
    }

    int p1,p2;
    if(pokemon[0].tier == 'G' && pokemon[1].tier == 'G')
    {
        printf("It is a tie!\n");
        return 1;
    }

    if(pokemon[0].hp > pokemon[1].hp) p1++;
    else p2++;
    if(pokemon[0].attack > pokemon[1].attack) p1++;
    else p2++;
    if(pokemon[0].defence > pokemon[1].defence) p1++;
    else p2++;
    if(pokemon[0].speed > pokemon[1].speed) p1++;
    else p2++;

    printf("\n");

    if(p1 > p2) printf("Player 1 won!\n");
    return 0;
}
#include <stdio.h>
#include "suju.h"

int main()
{
    char name[20];
    printf("Enter your name : ");
    getstr(name,sizeof(name));
    printf("Your name is : %s\n", name);
    return 0;
}

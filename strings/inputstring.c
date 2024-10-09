#include <stdio.h>
#include <string.h>
//#include "suju.h"

void string_get(char* p, size_t size);
int main()
{
    char a[20];
    printf("Enter your name : ");
    string_get(a, sizeof(a));
    printf("Your name is : %s\n", a);
    return 0;
}

void string_get(char* p, size_t size)
{
    fgets(p, size, stdin);
    size_t len  = strlen(p);
    if(p[len-1] == '\n') p[len-1] = '\0'; 
}

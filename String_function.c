#include <stdio.h>
#include <string.h>

void getstr(char *p, size_t size);
int main()
{
    char name[20];
    printf("Enter your name : ");
    getstr(name,sizeof(name));
    printf("Your name is : %s\n", name);
    return 0;
}

void getstr(char *p, size_t size)
{
    fgets(p, size, stdin);
    size_t len = strlen(p);
    if(len > 0 && p[len - 1] == '\n') p[len - 1] = '\0';
    return;
}
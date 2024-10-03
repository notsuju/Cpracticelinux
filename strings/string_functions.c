#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "Hello world";
    int len = strlen(s1);
    char s2[len];
    strcpy(s2,s1);
    printf("%s\n", s2);
    s2[0] = 'B';
    strcat(s1,s2);
    printf("%s\n", s1);
    return 0;
}
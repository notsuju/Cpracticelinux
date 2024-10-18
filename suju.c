#include "suju.h"

void getstr(char *p, size_t size)
{
    fgets(p, size, stdin);
    size_t len = strlen(p);
    if (len > 0 && p[len - 1] == '\n')
    {
        p[len - 1] = '\0';
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
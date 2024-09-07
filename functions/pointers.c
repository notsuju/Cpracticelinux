#include <stdio.h>

int main()
{
    int a = 5;
    int *x = &a;
    int **y = &x;
    printf("%p\n", &a);
    printf("%d\n", a);
    printf("%d\n", *x);
    printf("%d\n", **y);
    return 0;
}
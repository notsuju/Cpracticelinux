#include <stdio.h>

int main()
{
    int a = 5;
    int *x = &a;
    printf("%p\n", &a);
    printf("%d\n", a);
    printf("%d\n", *x);
    return 0;
}
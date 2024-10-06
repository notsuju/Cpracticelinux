#include <stdio.h>
#include <string.h>

typedef int* int_pointer;
int main()
{
    int x,y;
    // int *a = &x,*b = &y;
    int_pointer a = &x, b = &y;
    printf("%p %p\n", a,b);
}
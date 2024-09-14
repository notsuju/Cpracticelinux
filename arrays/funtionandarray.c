#include <stdio.h>

void fun(int a[])
{
    a[0] = 10;
    return;
}
int main()
{
    int a[5] = {1,2,3,4,5};
    printf("%d\n", a[0]);
    fun(a);
    printf("%d\n", a[0]);
    return 0;
}
#include <stdio.h>

int main()
{
    int a[10] = {87,56,34,87,83,96,12,45,9,67};
    for(int i = 0; i < 10; i++)
    {
        if(a[i] <= 35) printf("%d\n", i);
    }
    return 0;
}
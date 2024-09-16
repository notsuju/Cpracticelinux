#include <stdio.h>

int main()
{
    int a[5] = {1,2,3,4,5};
    for(int i = 0,j = 4; i < 5 && j >= 0; i++, j--)
    {
        a[i] = a[j];
    }
}
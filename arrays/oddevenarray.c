#include <stdio.h>

int main()
{
    int a[5] = {3,4,67,2,9};
    for(int i = 0; i < 5; i++)
    {
        if(i == 0)
        {
            printf("%d ", a[i]);
            continue;
        }
        else if(i%2 == 0) a[i] += 10;
        else a[i] *= 2;
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}

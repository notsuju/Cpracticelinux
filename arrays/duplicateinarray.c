#include <stdio.h>

int main()
{
    int a[7] = {1,2,1,3,5,5,6};
    int c = 0;
    for(int i = 0; i < 7; i++)
    {
        for(int j = i+1; j < 7; j++)
        {
            if(a[i] == a[j])
            {
                printf("%d is the duplicate in array\n", a[i]);
            }
        }
    }
    return 0;
}
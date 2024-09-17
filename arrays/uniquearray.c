#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a[7] = {1,3,2,3,1,2,4};
    for(int i = 0; i < 7; i++)
    {
        bool flag = false;
        for(int j = 0; j < 7; j++)
        {
            if(a[i] == a[j] && i != j)
            {
                if(flag) continue;
                flag = true;
            }
        }
        if(flag==false)
        {
            printf("%d is the unique number in the given array\n", a[i]);
            break;
        }
    }
    return 0;
}

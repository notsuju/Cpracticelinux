#include <stdio.h>

int main()
{
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int c;
    for(int i = 0; i < 3; i++)
    {
        c = 2;
        for(int j = 0; j < 3; j++)
        {
            if(i%2 == 0) printf("%d ", a[i][j]);
            else
            {
                printf("%d ", a[i][c]);
                c--;
            }
        }
    }
    printf("\n");
    return 0;
}

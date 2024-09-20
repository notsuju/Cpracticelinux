#include <stdio.h>

int main()
{
    int a[2][2] = {-8,-4,0,-1};
    int max;
    int index_i;
    int index_j;
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            if(i == 0 && j == 0) max = a[i][j];
            if(max < a[i][j])
            {
                max = a[i][j];
                index_i = i;
                index_j = j;
            }
        }
    }
    printf("%d is max with row : %d & column : %d\n", max, index_i, index_j);

    return 0;
}
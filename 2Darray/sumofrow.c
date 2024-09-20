#include <stdio.h>
#include <limits.h>

#define ROWS 3

int main()
{
    int a[ROWS][3] = {{1,9,9}, {5,-16,9}, {1,0,9}};
    int r = 0;
    int sum[ROWS] = {0};
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            sum[i] += a[i][j];
        }
        r = (sum[i] > sum[r])? i:r;
    }
    printf("Row %d has the most sum of %d\n", r, sum[r]);
    return 0;
}
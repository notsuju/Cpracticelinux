#include <stdio.h>
#include <limits.h>

#define ROWS 2
#define COLUMNS 3

int main()
{
    int a[ROWS][COLUMNS] = {{1,0,1}, {1,-1,-11}};
    int counter[ROWS] = {0};
    int r = 0;
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLUMNS; j++)
        {
            if(a[i][j] == 1) counter[i]++;
        }
        // comparing number of 1's in rows after the loop
        r = (counter[i] > counter[r])? i:r;
    }
    printf("%d row has the most number of 1's at %d\n", r,counter[r]);
    return 0;
}
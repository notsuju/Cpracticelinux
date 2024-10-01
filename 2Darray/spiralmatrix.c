#include <stdio.h>
// LEETCODE - 54

int main()
{
    int r,c;
    printf("Enter the number of rows for matrix : ");
    scanf("%d", &r);
    printf("Enter the number of columns for matrix : ");
    scanf("%d", &c);
    int a[r][c];
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            printf("Enter a number for place (%d,%d) : ", i,j);
            scanf("%d", &a[i][j]);
        }
    }
    
    int minr = 0;
    int maxr = r-1;
    int minc = 0;
    int maxc = c-1;
    int counter = 0;
    int total = r*c;
    while(counter < r*c)
    {
        for(int i = minc; i <= maxc && counter < total; i++)
        {
            printf("%d ", a[minr][i]);
            counter++;
        }
        minr++;
        for(int i = minr; i <= maxr && counter < total; i++)
        {
            printf("%d ", a[i][maxc]);
            counter++;
        }
        maxc--;
        for(int i = maxc; i >= minc && counter < total; i--)
        {
            printf("%d ", a[maxr][i]);
            counter++;
        }
        maxr--;
        for(int i = maxr; i >= minr && counter < total; i--)
        {
            printf("%d ", a[i][minc]);
            counter++;
        }
        minc++;
    }
    return 0;
}

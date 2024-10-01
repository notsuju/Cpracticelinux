#include <stdio.h>
// LEETCODE - 54

int main()
{
    int n;
    printf("Enter the number of rows/column : ");
    scanf("%d", &n);
    int a[n][n];
    
    int minr = 0;
    int maxr = n-1;
    int minc = 0;
    int maxc = n-1;
    int counter = 0;
    int total = n*n;
    while(counter < total)
    {
        for(int i = minc; i <= maxc && counter < total; i++)
        {
            counter++;
            a[minr][i] = counter;
        }
        minr++;
        for(int i = minr; i <= maxr && counter < total; i++)
        {
            counter++;
            a[i][maxc] = counter;
        }
        maxc--;
        for(int i = maxc; i >= minc && counter < total; i--)
        {
            counter++;
            a[maxr][i] = counter;
        }
        maxr--;
        for(int i = maxr; i >= minr && counter < total; i--)
        {
            counter++;
            a[i][minc] = counter;
        }
        minc++;
    }
    
    // output and printing
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
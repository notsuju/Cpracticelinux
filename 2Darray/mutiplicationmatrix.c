#include <stdio.h>

int main()
{
    // first matrix
    int m,n;
    printf("Enter the number of rows for 1st matrix : ");
    scanf("%d", &m);
    printf("Enter the number of columns for 1st matrix : ");
    scanf("%d", &n);
    int a[m][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("Enter a number for place (%d,%d) : ", i,j);
            scanf("%d", &a[i][j]);
        }
    }
    // second matrix
    int p,q;
    printf("Enter the number of rows for 2nd matrix : ");
    scanf("%d", &p);
    printf("Enter the number of columns for 2nd matrix : ");
    scanf("%d", &q);
    int b[p][q];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("Enter a number for place (%d,%d) : ", i,j);
            scanf("%d", &a[i][j]);
        }
    }
    // error handling
    if(n != p) return 1;

    // actual multiplication
    int pr[m][q];
    int sum;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < q; j++)
        {
            sum = 0;
            for(int k = 0; k < n; k++)
            {
                for(int l = 0; l < p; l++)
                {
                    sum += a[i][k] * b[l][j];
                    pr[i][j] = sum;
                }
            }
        }
    }

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < q; j++)
        {
            printf("%d ", pr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
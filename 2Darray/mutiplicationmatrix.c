#include <stdio.h>

int main()
{
    // first matrix input
    int m,n;
    printf("Enter the number of rows for 1st matrix : ");
    scanf("%d", &m);
    printf("Enter the number of columns for 1st matrix : ");
    scanf("%d", &n);
    int a[m][n];
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("Enter a number for place (%d,%d) : ", i,j);
            scanf("%d", &a[i][j]);
        }
    }

    // second matrix input
    int p,q;
    printf("Enter the number of rows for 2nd matrix : ");
    scanf("%d", &p);
    printf("Enter the number of columns for 2nd matrix : ");
    scanf("%d", &q);
    int b[p][q];
    for(int i = 0; i < p; i++)
    {
        for(int j = 0; j < q; j++)
        {
            printf("Enter a number for place (%d,%d) : ", i,j);
            scanf("%d", &b[i][j]);
        }
    }


    // error handling
    if(n != p)
    {
        printf("Error columns of first matrix and rows of second don't match!\n");
        return 1;
    }


    // multiplication calculation
    int r[m][q];
    int sum = 0;
    int x;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < q; j++)
        {
            // interested in ith row of a and jth column of b
            sum = 0;
            x = 0;
            while(x < n)
            {
                sum += a[i][x] * b[x][j];
                x++;
            }
            r[i][j] = sum;
        }
    }


    // Printing of the resulting array
    printf("\nThe multiplied matrix is : \n");
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < q; j++)
        {
            printf("%d ", r[i][j]);
        }
        printf("\n");
    }

    return 0;
}
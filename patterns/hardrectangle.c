#include <stdio.h>

int minimum(int x, int y);
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    int min;
    for(int i = 1; i <= 2*n-1; i++)
    {
        for(int j = 1; j <= 2*n-1; j++)
        {
            int a = i;
            if(i > n) a = 2*n-i;
            int b = j;
            if(j > n) b = 2*n-j;
            min = minimum(a,b); // calling function minimum
            printf("%d ", n+1-min);
        }
        printf("\n");
    }
    return 0;
}

int minimum(int x, int y)
{
    int m = (x >= y)? y:x;
    return m;
}
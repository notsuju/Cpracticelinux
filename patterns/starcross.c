#include <stdio.h>

int main()
{
    int n;
    do
    {
        printf("Enter a odd number : ");
        scanf("%d", &n);
    } while (n%2==0);

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(j == i || (j+i == n+1))printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
    return 0;
    
}
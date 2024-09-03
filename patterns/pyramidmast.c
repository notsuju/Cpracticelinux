#include <stdio.h>
int main() //(difficult)
{
    int n;
    printf("Enter length of the sides : ");
    scanf("%d", &n);
    int x = 1;
    for(int i = 1; i <= n; i++)
    {
        x = 1;
        for(int j = 1; j <= n-i; j++) printf("  ");
        for(int k = 1; k <= 2*i-1; k++)
        {
            if(k > i) printf("%d ", --x);
            else if (k < i) printf("%d ", x++);
            else printf("%d ", x); 
        } 
        printf("\n");
    }
    return 0;
}
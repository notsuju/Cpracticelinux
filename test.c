#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows : ");
    scanf("%d", &n);
    int x = 1;
    for(int i = 1; i <= n; i++)
    {
        x = i;
        for(int j = 1; j <= i; j++)
        {
            //if(j == 1) printf("%d", x);
            //else printf("%d", --x);
            printf("%d", x);
            x--;
        }
        printf("\n");
        // this is a test for git
    }

    return 0; 
} 


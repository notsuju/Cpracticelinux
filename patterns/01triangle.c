#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows : ");
    scanf("%d", &n);
    /*
    i=1    1
    i=2    01
    i=3    101
    i=4    0101
    */
    // int x; (my version)
    // for(int i = 1; i <= n; i++)
    // {
    //     if(i%2 == 0) x = 0; // checks if i is even if it is then start with 0
    //     else x = 1;
    //     for(int j = 1; j <= i; j++)
    //     {
    //         if(x == 1) printf("%d", x--);
    //         else printf("%d", x++);
    //     }
    //     printf("\n");
    // }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            if(i == j || (i+j)%2 == 0) printf("1 ");
            else printf("0 ");
        }
        printf("\n");
    }
    return 0;
}
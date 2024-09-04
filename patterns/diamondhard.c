#include <stdio.h>

int main()
{
    int n;
    do
    {
        printf("Enter length of the sides : ");
        scanf("%d", &n);
    } while(n%2==0);


    int x = n - 2;
    int n1 = (n+1)/2;
    // for(int i = 1; i <= n; i++)
    // {
    //     if(i < n1)
    //     {
    //         for(int j = 1; j <= n1) - i; j++) printf("  ");
    //         for(int k = 1; k <= 2*i-1; k++) printf("* ");
    //     }
    //     else if(i > n1)
    //     {
    //         for(int o = 1; o <= i - n1; o++) printf("  ");
    //         for(int p = 1; p <= x; p++)
    //         {
    //             printf("* ");
    //         } 
    //         x = x - 2;
    //     }
    //     else{
    //         for(int j = 1; j <= n; j++) printf("* ");
    //     }
    //     printf("\n");
    // }
    // for(int i = 1; i <= n; i++)
    // {
    //     if(i > n1)
    //     {
    //         for(int o = 1; o <= i - n1; o++) printf("  ");
    //         for(int p = 1; p <= x; p++)
    //         {
    //             printf("* ");
    //         } 
    //         x -= 2;
    //     }
    //     //*****
    //     // ***
    //     //  *
    //     else
    //     {
    //         for(int j = 1; j <= n1 - i; j++) printf("  ");
    //         for(int k = 1; k <= 2*i - 1; k++) printf("* ");
    //     }
    //     printf("\n");
    // }

    // SIR VERSION ABOVE TWO ARE MY VERSIONS
    int nsp = n1;
    int nst = 1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= nsp; j++) printf("  ");
        for(int k = 1; k <= nst; k++) printf("* ");

        if(i < n1)
        {
            nsp--;
            nst+=2;
        }
        else
        {
            nsp++;
            nst-=2;
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    // int c = n;

    // for(int i = 1; i <= 2*n-1; i++)
    // {
    //     for(int j  = 1; j <= 2*n-1; j++)
    //     {
    //         // for(k = 1; k <= n; k++)
    //         // {

    //         // }
    //         c = n;
    //         if(j == 1 || j == 2*n-1 || i == 1 || i == 2*n-1)
    //         {
    //             printf("%d ", c);
    //         }
    //         else if (j == 2 || j == 2*n-2 || i == 2 || i == 2*n-2)
    //         {
    //             if(c == 4) c--;
    //             printf("%d ", c);
    //         }
    //         else if(j == 3 || j == 2*n-3 || i == 3 || i == 2*n-3)
    //         {
    //             if(c == 4) c -= 2;
    //             printf("%d ", c);
    //         }
    //         else if(j == i)
    //         {
    //             if(c == 4) c -= 3;
    //             printf("%d ", c);
    //         }
    //     }
    //     printf("\n");
    // }

    int min;
    for(int i = 1; i <= 2*n-1; i++)
    {
        for(int j = 1; j <= 2*n-1; j++)
        {
            int a = i;
            if(i > n) a = 2*n-i;
            int b = j;
            if(j > n) b = 2*n-j;
            min = (a >= b)? b:a;
            printf("%d ", n+1-min);
        }
        printf("\n");
    }





    return 0;
}
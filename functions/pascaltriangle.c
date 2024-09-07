#include <stdio.h>

//int combination(int a, int b);
//int factorial(int f);
int main()
{
    int x;
    printf("Enter the number of lines : ");
    scanf("%d", &x);
    int c = x;
    int fir;
    for(int i = 0; i < x; i++)
    {
        fir = 1;
        for(int k = c; k > 1; k--) printf(" ");
        c--;
        for(int j = 0; j <= i; j++)
        {
            //printf("%d", combination(i,j));
            printf("%d", fir);
            fir = fir * (i - j)/(j + 1);
            if(j != i)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

// int factorial(int f)
// {
//     int fac = 1;
//     for(int k = 1; k <= f; k++) fac *= k;
//     return fac;
// }
// int combination(int a, int b)
// {
//     return factorial(a) / (factorial(b) * factorial(a - b));
// }
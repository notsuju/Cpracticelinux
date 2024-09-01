#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number : ");
    scanf("%d", &a);
    int fac = 1;
    // for(int j = 1; j <= a; j++)
    // {
    //     fac = 1;
    //     for(int i = j; i > 0; i--)
    //     {
    //         fac *= i;
    //     }
    // printf("%d! is : %d\n", j,fac);
    // }
    for(int i = 1; i <= a; i++)
    {
        fac *= i;
        printf("%d! : %d\n", i,fac);
    }
    return 0;
}
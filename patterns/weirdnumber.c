#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of lines : ");
    scanf("%d", &n);
    int nsp = 1;
    int c = 1;

    for(int i = 1; i <= n; i++)
    {
        c = 1;
        for(int j = n; j >= i; j--) printf("%d ", c++); // normal inverted triangle 
        if(i != 1)
        {
            for(int k = 1; k <= nsp; k++)
            {
                printf("  "); // middle spaces only after i is more than 1
                c++;
            } 
            nsp += 2;
        }
         // * * * (hard)
         // * * *
         // * *
         // *
        if(i == 1) for(int l = n - 1; l >= i; l--) printf("%d ", c++);
        else for(int l = n; l >= i; l--) printf("%d ", c++);
        printf("\n");
    }
    return 0;
}
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of lines : ");
    scanf("%d", &n);
    int z = 2*n - 1;
    int nsp = 1;
    for(int i = 1; i <= n; i++)
    {
         for(int j = n; j >= i; j--) printf("* "); // normal inverted triangle 
         if(i != 1)
         {
            for(int k = 1; k <= nsp; k++) printf("  "); // middle spaces only after i is more than 1
            nsp += 2;
         }
         // * * * (hard)
         // * * *
         // * *
         // *
         if(i == 1) for(int l = n - 1; l >= i; l--) printf("* ");
         else for(int l = n; l >= i; l--) printf("* ");
         printf("\n");
    }
}
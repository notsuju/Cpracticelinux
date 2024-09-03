#include <stdio.h>

int main()
{
    /*(hard)
       *
      **
     ***
    ****
    */
    int a;
    printf("Enter the number of row : ");
    scanf("%d", &a);
    for(int i = 1; i <= a; i++)
    {
        for(int j = a; j > i; j--) printf("  ");
        for(int k = 65; k <= i+64; k++) printf("%c ", k);
        printf("\n");
    }
    return 0;
}
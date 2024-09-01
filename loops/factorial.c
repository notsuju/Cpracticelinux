#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number : ");
    scanf("%d", &a);
    int fac = 1;
    for(int i = a; i > 0; i--)
    {
        fac *= i;
    }
    printf("The factorial is : %d\n", fac);
}
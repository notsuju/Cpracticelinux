#include <stdio.h>

int main()
{
    int a;
    printf("Enter the base : ");
    scanf("%d", &a);
    int b, power = 1;
    printf("Enter the exponent : ");
    scanf("%d", &b);
    for(int i = 0; i < b; i++)
    {
        power *= a;
    }
    printf("The answer is : %d\n", power);
}
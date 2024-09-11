#include <stdio.h>

int power_log(int a, int b);
int main()
{
    int a;
    printf("Enter the base : ");
    scanf("%d", &a);
    int b;
    printf("Enter the exponent : ");
    scanf("%d", &b);
    printf("%d raised to the power %d is : %d\n", a, b, power_log(a,b));
    return 0;
}

int power_log(int a, int b)
{
    if(b == 0) return 1;
    int x = power_log(a, b/2); 
    if(b%2 == 1) return x * x * a; // FOR ODD CASES
    else return x * x;
}

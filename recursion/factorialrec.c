#include <stdio.h>

int factorial(int a);
int main()
{
    int n;
    do
    {
        printf("Enter a number : ");
        scanf("%d", &n);
    } while (n < 0);
    
    printf("%d! is : %d\n", n,factorial(n));
    return 0;
}

int factorial(int a)
{
    if(a == 1 || a == 0) return 1; //base case
    return a*factorial(a-1);
}
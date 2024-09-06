#include <stdio.h>

int sum(int x, int y);
int main()
{
    int a,b;
    printf("The sum of numbers is : %d\n", sum(a,b));
    return 0;
}

int sum(int x, int y)
{
    printf("Enter the first number : ");
    scanf("%d", &x);
    printf("Enter the second number : ");
    scanf("%d", &y);
    int s = x+y;
    return s;
}
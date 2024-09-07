#include <stdio.h>

int highest_factor(int x, int y);
int main()
{
    int a,b;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);
    printf("The highest common factor is : %d\n", highest_factor(a,b));
    return 0;
}

int highest_factor(int x, int y)
{
    int min = (x > y)? y:x;
    for(int i = min; i >= 2; i--)
    {
        if(x%i == 0 && y%i == 0)
        {
            min = i;
            break;
        }
    }
    return min;
}
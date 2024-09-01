#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    printf("Enter the number : ");
    scanf("%d", &a); 
    int d = a;
    int r = 0;
    while(a != 0)
    {
        r = r*10;
        r += a%10;
        a /= 10;
    }
    printf("The reversed number is : %d\n", r);
    return 0;
}
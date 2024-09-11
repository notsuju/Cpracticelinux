// ONLY ALLOWED TO MOVE 1 OR 2 STEPS AT A TIME
#include <stdio.h>

int stair(int n);
int main()
{
    int n;
    printf("Enter the number of stairs : ");
    scanf("%d", &n);
    printf("The number of ways in which stairs can be climbed : %d\n", stair(n));
    return 0;
}


// int stair(int n, int x)
// {
//     if(n == x) return 1;
//     return n-1 + stair(n-1, x);
// }

int stair(int n)
{
    if(n == 1) return 1;
    if(n == 2) return 2; // do we even need this case.
    return stair(n-1) + stair(n-2);
}
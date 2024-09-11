// ONLY DOWNWARD AND RIGHTWARD MOVEMENT IS ALLOWED PLUS ONLY ONE STEP IS ALLOWED AT A TIME(these questions are available on CW recursion part)
#include <stdio.h>

int maze(int a, int b);
int main()
{
    int r;
    printf("Enter the number of rows of the maze : ");
    scanf("%d", &r);
    int c;
    printf("Enter the number of columns of the maze : ");
    scanf("%d", &c);
    printf("Number of ways in which maze can be solved is : %d\n", maze(r,c));
    return 0;
}

int maze(int a, int b)
{
    if(a == 1 || b == 1) return 1;
    return maze(a - 1, b) + maze(a, b - 1);
}
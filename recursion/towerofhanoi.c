#include <stdio.h>

void towerofhanoi(int n, int a, int b, int c);
int main()
{
    int n;
    printf("Enter the number of disks : ");
    scanf("%d", &n);
    towerofhanoi(n, 65, 66, 67);
    return 0;
}

void towerofhanoi(int n, int a, int b, int c)
{
    if(n == 0) return;
    towerofhanoi(n-1, a, c, b);
    printf("%c -> %c\n", a, c);
    towerofhanoi(n-1, b, a, c);
    return;
}

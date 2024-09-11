#include <stdio.h>

//void increasing(int n, int temp);
void increasing(int n);
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int temp = 1;
    //increasing(n, temp);
    increasing(n);
    printf("\n");
    return 0;
}

// void increasing(int n, int temp)  // USING EXTRA PARAMETER METHOD
// {
//     if(temp > n) return;
//     printf("%d ", temp++);
//     increasing(n, temp);
//     return;
// }

void increasing(int n) // RECURSION BUT DIFF
{
    if(n == 0) return;
    increasing(n-1);
    printf("%d ", n);
    return;
}
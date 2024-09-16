#include <stdio.h>

int main()
{
    int x;
    int c = 0;
    printf("Enter the number : ");
    scanf("%d", &x);
    int a[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 8; j++)
        {
            if (x - a[i] == a[j])
                c++;
        }
    }
    printf("The number of pairs whose sum is %d is : %d\n", x, c);
}
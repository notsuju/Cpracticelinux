#include <stdio.h>

int main()
{
    // int a[5] = {2,4,6,8,1};
    // a[4] = 100;
    // printf("%d\n", a[4]);
    // float x[3] = {2,2.3,6.7};
    // printf("%f", x[1]);
    // char n[6] = {'h','e','l','l','o','\0'};
    // printf("%c\n", n[5]);
    int a[5];
    for(int i = 0; i < 5; i++)
    {
        printf("Enter the number : ");
        scanf("%d", &a[i]);
    }
    for(int i = 4; i >= 0; i--) printf("%d ", a[i]);
    return 0;
}
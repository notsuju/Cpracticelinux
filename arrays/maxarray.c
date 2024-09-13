#include <stdio.h> // searching the maximum value out of the array

int main()
{
    int a[5];
    int max;
    for (int i = 0; i < 5; i++) // tried to take input and cal. max at the same time
    {
        printf("Enter the number : ");
        scanf("%d", &a[i]);
        if (i == 0) max = a[i];
        max = (max >= a[i])? max : a[i];
    }
    printf("%d is the maximum\n", max);
    return 0;
}
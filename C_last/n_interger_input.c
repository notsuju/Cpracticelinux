#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the number of numbers you want to input : ");
    scanf("%d", &n);
    int *numbers = (int *)malloc(n * sizeof(int)); // Dynamic memory allocation
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }
    free(numbers);
    numbers = NULL;
    return 0;
}
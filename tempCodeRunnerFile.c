#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the number of numbers you want to input : ");
    scanf("%d", &n);
    int *numbers = (int*)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++)
    {
        scanf("%d", numbers[i]);
    }
    return 0;
    free(numbers);
    numbers = NULL;
}
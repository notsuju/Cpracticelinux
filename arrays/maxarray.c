#include <stdio.h> // searching the maximum value out of the array

int main()
{
    size_t size;
    do
    {
        printf("Enter the size of the array : ");
        scanf("%d", &size);
    } while (size < 2);
    
    int a[size];
    int max;
    for (int i = 0; i < size; i++) // tried to take input and cal. max at the same time
    {
        printf("Enter the number : ");
        scanf("%d", &a[i]);
        if (i == 0) max = a[i];
        max = (max < a[i])? a[i]:max;
    }
    printf("%d is the maximum\n", max);
    return 0;
}
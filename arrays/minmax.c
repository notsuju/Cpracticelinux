#include <stdio.h> // searching the maximum value out of the array

int main()
{
    size_t size;
    int status;
    do
    {
        printf("Enter the size of the array : ");
        scanf("%d", &size);
        printf("Type '1' for maximum and '2' for minimum : ");
        scanf("%d", &status);
    } while (size < 2 || (status != 1 && status != 2));

    
    int a[size];
    int max;

    for (int i = 0; i < size; i++) // tried to take input and cal. max at the same time
    {
        printf("Enter the number : ");
        scanf("%d", &a[i]);
        if (i == 0) max = a[i];
        if(status == 1) max = (max < a[i])? a[i]:max;
        else max = (max < a[i])? max:a[i];
    }

    if(status == 1) printf("%d is the maximum\n", max);
    else printf("%d is the minimum\n", max);
    return 0;
}
#include <stdio.h>

void deletion(int arr[], int n, int *size);
int main()
{
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    int n;
    printf("Enter the index at which the number should be deleted : ");
    scanf("%d", &n);
    if(n < 0 || n > 4)
    {
        printf("Invalid index\n");
        return 1;
    }
    deletion(arr, n, &size);
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

void deletion(int arr[], int n, int *size)
{
    for(int i = n + 1; i < *size; i++)
    {
        arr[i - 1] = arr[i];
    }
    (*size)--;
    return;
}

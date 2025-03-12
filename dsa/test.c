#include <stdio.h>

void insert(int arr[], int n, int a);
int main()
{
    int arr[6] = {1,2,3,4,5};
    int n;
    printf("Enter the index at which the number should be inserted : ");
    scanf("%d", &n);
    if(n < 0 || n > 5)
    {
        printf("Invalid index\n");
        return 1;
    }
    int a;
    printf("Enter the number that should be inserted at that index :");
    scanf("%d", &a);
    insert(arr, n, a);
    for(int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

void insert(int arr[], int n, int a)
{
    for(int i = 6 - 2; i >= n; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[n] = a;
    return;
}

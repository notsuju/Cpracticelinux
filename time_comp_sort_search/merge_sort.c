#include <stdio.h>

#define ARRAY_SIZE 8
void merge_sort(int arr[], int n);
int main()
{
    int arr[ARRAY_SIZE] = {6,3,4,1,5,2,7,0};
    merge_sort(arr, ARRAY_SIZE);
    printf("The sorted array is : ");
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

void merge_sort(int arr[], int n)
{
    int brr[ARRAY_SIZE] = {0};
    if(n == 1)
    {
        return;
    }
    merge_sort(arr, n/2);
    merge_sort(arr, n - n/2);

}

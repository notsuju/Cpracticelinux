#include <stdio.h>
#include <limits.h>

#define ARRAY_SIZE 7

void swap(int* a, int* b);
int main()
{
    int arr[ARRAY_SIZE] = {9,1,3,4,10,5,6};
    int no_of_swaps;
    int last_index_to_be_sorted = ARRAY_SIZE - 1;
    for(int i = 0; i < ARRAY_SIZE - 1; i++)
    {
        no_of_swaps = 0;
        for(int j = 0; j < last_index_to_be_sorted; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
                no_of_swaps++;
            }
        }
        if(no_of_swaps == 0) break; // means that the array is sorted
        last_index_to_be_sorted--; // as on every iteration it is must that the highest number is at last(for this example its 10)
    }

    printf("Sorted array : ");
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}
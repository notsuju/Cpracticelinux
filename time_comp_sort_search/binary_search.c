#include <stdio.h>
#include <stdlib.h>
// Time complexity of O(n)
void swap(int* a, int* b);
void bubble_sort(int arr[], int n);
int main()
{
    // Taking size of array as input
    int n;
    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);
    if(n <= 0)
    {
        printf("Error the number of elements should be positive\n");
        return 1;
    }
    // Allocating memory for the array
    int* arr = (int* )malloc(n * sizeof(int));
    if(arr == NULL)
    {
        printf("Error allocating memory\n");
        return 2;
    }

    // Taking array as input
    for(int i = 0; i < n; i++)
    {
        printf("Enter a number for index %d : ", i);
        scanf("%d", &arr[i]);
    }

    // Number to be searched
    int s;
    printf("Enter the number to be searched : ");
    scanf("%d", &s);

    // Sorting the array via bubble sort
    bubble_sort(arr, n);
    // BInary search algorithm
    int half_max = n - 1;
    int half_min = 0;
    int mid;
    int found = -1;
    while(half_min <= half_max)
    {
        mid = (half_max+half_min) / 2;
        if(arr[mid] == s)
        {
            found = mid;
            break;
        }
        if(arr[mid] < s) half_min = mid + 1; // GO right
        else half_max = mid - 1; // GO left
        // REPEAT
    };
    if(found == -1) printf("Error searching\n");
    // else printf("Found at index %d\n", found);
    else printf("%d exist in the given array\n", s);

    // Freeing allocated memory
    free(arr);
    arr = NULL;
    return 0;
}

void bubble_sort(int arr[], int n)
{
    int no_of_swaps;
    int last_index_to_be_sorted = n - 1;
    for(int i = 0; i < n - 1; i++)
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
        last_index_to_be_sorted--; // as on every iteration it is must that the highest number is at last
    }
    return;
}

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}
#include <stdio.h>
#include <limits.h>

#define ARRAY_SIZE 7
int main()
{
    int arr[ARRAY_SIZE] = {1,12,23,67,100,123,346}; // already sorted array is given
    int i = 0;
    int j = ARRAY_SIZE - 1;
    int target = 90;
    while(i < j)
    {
        if(arr[i] + arr[j] == target)
        {
            printf("Found sum of %d and %d is %d\n", arr[i],arr[j],target);
            break;
        }
        else if(arr[i] + arr[j] > target) j--;
        else if(arr[i] + arr[j] < target) i++;
    }
    return 0;
}
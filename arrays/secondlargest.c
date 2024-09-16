#include <stdio.h>

int main()
{
    int a[5];
    int max,max1;
    printf("Enter a number : ");
    scanf("%d", &a[0]);
    max = a[0];
    // for(int i = 1; i < 5*2; i++)
    // {
    //     if(i < 5)
    //     {
    //         printf("Enter a number : ");
    //         scanf("%d", &a[i]);
    //         max = (max < a[i])? a[i]:max;
    //     }
    //     if(max == a[i-5]) continue;
    //     max1 = (max1 < a[i-5])? a[i-5]:max1;
    // }
    for(int i = 1; i < 5; i++)
    {
        printf("Enter a number : ");
        scanf("%d", &a[i]);
        if(max < a[i])
        {
            max1 = max;
            max = a[i];
        }
        else if(max1 < a[i] && max != a[i])
        {
            max1 = a[i];
        }
    }



    printf("The second largest element in the array is : %d\n", max1);
    return 0;
}
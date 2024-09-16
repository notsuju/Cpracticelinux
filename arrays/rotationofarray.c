#include <stdio.h>
// Good question!

void reverse(int a[],int i, int j);
int main()
{
    int k;
    int a[7] = {1,2,3,4,5,6,7};
    size_t len = 7;
    printf("Enter by which the array should rotate : ");
    scanf("%d", &k);
    k = k % len;

    //steps are as follows
    reverse(a,0,len-1); // reverse the whole thing
    reverse(a,0,k-1); // reverse from 0 to k - 1 index
    reverse(a,k,len-1); // reverse from k to len - 1 index

    for(int i = 0; i < 7; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
void reverse(int a[], int i, int j) // reversing a particular part of the array
{
    for(i,j; i <= j; i++,j--)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    return; // as this function only has a side effect it does not returns any value
}
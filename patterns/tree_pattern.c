#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of lines : ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int k = 0; k < n-1-i; k++){
            printf(" ");
        }
        for(int j = 0; j < 2*i+1; j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i = 0; i < n; i++){
        if(i == n-1) printf("*\n");
        else printf(" ");
    }
    return 0;
}

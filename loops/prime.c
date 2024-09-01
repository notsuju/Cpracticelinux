#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int c = 0;
    // for(int i = 1; i <= n; i++) // (my code)
    // {
    //     if(n%i == 0)
    //     {
    //         c++;
    //         if(c == 2 && i == n)
    //         {
    //             printf("It is a prime no.\n");
    //             break;
    //         }
    //         else if (c > 2)
    //         {
    //             printf("It is a composite no.\n");
    //             break;
    //         }
    //     }
    // }
    //if(n == 1) printf("1 is neither prime nor composite number");
    for(int i = 2; i <= (n-1); i++) //sir's code
    {

        if(n%i == 0)
        {
            printf("The number is a composite number\n");
            c++;
            break;
        } 
    }
    if(n == 1) printf("1 is neither prime nor composite number\n");
    else if(c == 0) printf("The number is a prime number\n");
    return 0;
}
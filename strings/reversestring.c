#include <stdio.h>
#include <string.h>

int main()
{
    char a[20];
    printf("Enter a string : ");
    fgets(a, sizeof(a), stdin);
    size_t len = strlen(a);
    if(a[len-1] == '\n') a[len-1] = '\0';
    printf("Your reversed string is : ");
    for(int i = len-1; i >= 0; i--)
    {
        //printf("%c", *(a+i));
        printf("%c", a[i]);
    }
    printf("\n");
    return 0;
}
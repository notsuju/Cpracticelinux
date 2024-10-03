#include <stdio.h>

int main()
{
    char a[10] = "College";
    int c;
    char ch;
    printf("Enter the index at which shifting happens : ");
    scanf("%d", &c);
    if(c < 0 || c > 7)
    {
        printf("ERROR");
        return 0;
    }

    printf("Enter the character with which shifting should happen : ");
    scanf(" %c", &ch); /// to ignore the white spaces and new line characters
    for(int i = 6; i >= c; i--)
    {
        a[i+1] = a[i];
    }
    a[c] = ch;
    a[8] = '\0';
    printf("%s\n", a);
    return 0;
}
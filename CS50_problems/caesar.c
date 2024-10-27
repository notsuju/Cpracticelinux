#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "suju.h"

void rotate(char *user_text, int key);
int main(int argc, char *argv[])
{
    // Error Handling
    if(argc != 2)
    {
        printf("Error: Usage ./caesar KEY\n");
        return 1;
    }
    for(int i = 0;argv[1][i] != '\0'; i++)
    {
        if(!isdigit(argv[1][i]))
        {
            printf("Error: Usage ./caesar KEY\n");
            return 2;
        }
    }

    // Converting string to integer
    int key = atoi(argv[1]);

    // More error handling
    if(key < 0) 
    {
        printf("Error: key should be non-negative\n");
        return 3;
    }

    // Taking string input
    char user_text[104];
    printf("Plain Text : ");
    getstr(user_text, 104);

    // Rotating the alphabet by key places
    rotate(user_text, key);

    // Output
    printf("Caesar Text : %s\n", user_text);
    return 0;
}

void rotate(char *user_text, int key)
{
    for(int i = 0; i < strlen(user_text); i++)
    {
        if(isalpha(user_text[i]) != 0)
        {
            char base = (islower(user_text[i])) ? 'a' : 'A'; // for setting a to z values to 0-25
            user_text[i] = ((user_text[i] - base + key) % 26) + base;
        }
    }
    return;
}
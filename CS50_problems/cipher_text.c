#include <stdio.h>
#include <ctype.h>
#include "suju.h"

int main(int argc, char *argv[])
{
    // Error Handling 1
    if(argc != 2)
    {
        printf("Error: Usage ./cipher_text KEY\n");
        return 1;
    }

    size_t len = strlen(argv[1]);
    int counter[123] = {0};

    // Error Handling 2
    if(len != 26)
    {
        printf("Error : key could only contain 26 letters\n");
        return 1;
    }

    // Error Handling 3
    for(int i = 0; i < len; i++)
    {
        if(!isalpha(argv[1][i]))
        {
            printf("Error: Usage ./cipher_text KEY\n");
            return 1;
        }
        else // Checking if the key is unique
        {
            argv[1][i] = toupper(argv[1][i]);
            int specify = (int)argv[1][i];
            counter[specify]++;
            if(counter[specify] > 1)
            {
                printf("Error: Usage ./cipher_text KEY\n");
                return 1;
            }
        }
    }

    // Algorithm
    char plain_text[104];
    printf("Plain text : ");
    getstr(plain_text, 104);

    for(int i = 0; i < strlen(plain_text); i++)
    {
        if(islower(plain_text[i]))
        {
            char base = plain_text[i] - 'a';
            plain_text[i] = tolower(argv[1][base]);
            //plain_text[i] = tolower(plain_text[i]);
        }
        else if(isupper(plain_text[i]))
        {
            char base = plain_text[i] - 'A';
            plain_text[i] = toupper(argv[1][base]);
        }
    }

    printf("Cipher text : %s\n", plain_text);
    return 0;
}
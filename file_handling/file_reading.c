#include <stdio.h>
#include <string.h>

int main()
{
    FILE *ptr;// this is a pointer to file
    ptr = fopen("test.txt", "r");//read mode
    char buffer[100]; // So this is a buffer where the file is being written line by line
    if(ptr == NULL)// Checks if the ptr to file is NULL
    {
        printf("Error opening file\n");
        return 1;
    }
    
    fseek(ptr, 0, SEEK_SET);
    while(fgets(buffer, sizeof(buffer),ptr) != NULL)// ptr NULL means end of file
    {
        printf("Read line is : %s", buffer);// this is line by line reading
        printf("Line length : %zu\n", strlen(buffer));
    }
    fclose(ptr);
    return 0;
}

#include <stdio.h>

// return_type function_name(parameter1, parameter2) 
void greet(); // FUNCTION PROTOTYPE


int main()
{
    greet(); // we are calling the function
    return 0;
}

void greet()
{
    printf("Good morning\n");
    return;
}

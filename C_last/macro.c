#include <stdio.h>

#define PI 3.1415
#define AREA(r) (PI*r*r) // this is a macro function
int main()
{
    printf("%.3f", AREA(5));
    return 0;
}
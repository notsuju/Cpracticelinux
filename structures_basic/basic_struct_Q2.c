#include <stdio.h>

typedef struct 
{
    int date;
    int month;
    int year;
} Date;

int main()
{
    Date d1,d2;
    d1.date = 23;
    d1.month = 10;
    d1.year = 2007;

    // d2.date = 12;
    // d2.month = 12;
    // d2.year = 2004;

    d1 = d2;

    if(d1.date == d2.date && d1.month == d2.month && d1.year == d2.year)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Unequal\n");
    }
    return 0;
}
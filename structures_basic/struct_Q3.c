#include <stdio.h>
#include <string.h>

typedef struct
{
    int roll_no;
    char name[20];
    char dep[20];
    char course[12];
    int year_of_joining;
} student;

void compare(const student* s, const student* c);
int main()
{
    student surya;
    surya.roll_no = 236780;
    surya.year_of_joining = 2023;
    strcpy(surya.name, "Surya Sen");
    strcpy(surya.dep, "BBA");
    strcpy(surya.course, "BBA");

    student chhering = {234789, "Chhering", "BBA", "BSC", 2023}; // also do like this
    // student chhering;
    // chhering.roll_no = 234789;
    // chhering.year_of_joining = 2023;
    // strcpy(chhering.name, "Chhering");
    // strcpy(chhering.dep, "BBA");
    // strcpy(chhering.course, "BSC");

    compare(&surya, &chhering);
    return 0;
}

void compare(const student* s, const student* c)
{
    if(strcmp((*s).dep, c->dep) == 0) printf("Same department\n");
    else printf("Different department\n");
    return;
}
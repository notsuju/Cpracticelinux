#include <stdio.h>
#include <string.h>

struct Person
{
    char name[20];
    int age;
    float salary;
};
int main()
{
    struct Person p1;
    strcpy(p1.name, "Suju");
    p1.age = 23;
    p1.salary = 40000;
    struct Person p2;
    strcpy(p2.name, "Pikachu");
    p2.age = 6;
    p2.salary = 15000.0;
    printf("%s ", p1.name);
    printf("%d\n", p2.age);
    return 0;
}
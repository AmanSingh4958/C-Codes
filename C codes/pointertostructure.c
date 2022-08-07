#include <stdio.h>
#include <string.h>

struct employee
{
    char name[10];
    int age;
    char gender[10];
};

int main()
{
    struct employee *emp; // *emp is a pointer of struct employee type
    struct employee e1; // e1 is a variable of struct employee type
    emp = &e1;
    strcpy(e1.name, "aman");
    (*emp).age = 20;
    // emp -> age = 20; // arrow operator does the same thing that the above line of code does.
    strcpy(e1.gender, "male");
    printf("E1 name is %s\nE1 age is %d\nE1 gender is %s ", e1.name, e1.age, e1.gender);
    return 0;
}
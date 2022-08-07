#include <stdio.h>
#include <string.h>

struct employee
{
    char name[10];
    int age;
    char gender[10];
};

void display(struct employee e){
    struct employee *emp;
    emp = &e;
    printf("E name is %s\n", e.name);
    printf("E age is %d\n", (*emp).age);
    printf("E gender is %s", e.gender);
}

int main()
{
    struct employee e = {"aman", 20, "male"};
    display(e);
    return 0;
}
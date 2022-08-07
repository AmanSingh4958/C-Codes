#include <stdio.h>

typedef struct employee
{
    char name[10];
    int age;
    char gender[10];
}emp;

// typedef is used to create an alias name for data types in C
// emp alias is created for struct employee

int main()
{
    emp e1; // typedef created an alias emp and we can use emp to create variable of our struct type
    // struct employee e1;
    struct employee e2 = {"aman", 20, "male"}; // another way of initialising a structure
    // struct employee e3 = {0}; -> to store every element as 0 in e3
    printf("Enter your name = ");
    scanf("%s", &e1.name);
    printf("Enter your age = ");
    scanf("%d", &e1.age);
    printf("Enter your gender = ");
    scanf("%s", &e1.gender);
    printf("E1 name is %s\n", e1.name);
    printf("E1 age is %d\n", e1.age);
    printf("E1 gender is %s\n", e1.gender);
    printf("E2 name is %s\n", e2.name);
    printf("E2 age is %d\n", e2.age);
    printf("E2 gender is %s", e2.gender);
    return 0;
}
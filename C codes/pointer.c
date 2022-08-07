#include <stdio.h>
int main()
{
    printf("Usage of pointer\n");
    int a = 34;
    int *ptrb = &a;
    printf("The address of pointer to a is %x\n", &ptrb);
    printf("The address of a is %x\n", &a);
    printf("The address of a is %x\n", ptrb);
    // ptrb variable stores the address of a (i.e; a pointer stores the address of a variable to which it is pointed)
    printf("The value of a is %d\n", *ptrb); // Deference operator(*)
    printf("The value of a is %d", a);
    return 0;
}
// %u for address in int format , %x for address in hexadecimal format ,%p for address (pointer)
// Call by Value
#include <stdio.h>
// This type of function call doesn't affect the value of actual parameters.
int sum(int x, int y) // x and y are formal parameters.
{
    return (x + y);
}

void swap(int *x, int *y)
{
    int d;
    d = *x;  // Save the value at address x in d
    *x = *y; // Putting the value of y in x
    *y = d;  // Putting d into y
    return;
}

int main()
{
    printf("Call by Value\n");
    int a = 34, b = 66; // a and b are actual parameters.
    int s;
    s = sum(a, b); // Here the copies of the values of a and b are passed to the sum functions as arguments.
    printf("The sum of the numbers is %d\n", s);

    // Call by Reference
    // Swap program (Dereference operator is used)

    printf("Call by Reference\n");
    int e = 34, f = 74;
    printf("The value of e is %d and the value of f is %d\n", e, f);
    swap(&e, &f); // The address of e and f are passed as the parameters.
    printf("New value of e is %d and new value of f is %d", e, f);
    /*
    Call by reference changed the values of the actual parameters without using them 
    Here we used the formal parameters to modify them
    */
    return 0;
}
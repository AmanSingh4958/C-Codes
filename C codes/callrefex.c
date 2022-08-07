#include <stdio.h>
//fuction(Call by reference) for add or subtract
void addSub(int *a1, int *b1)
{
    int temp;
    temp = *a1;
    *a1 = *a1 + *b1;
    *b1 = temp - *b1;
    return;
}

int main()
{
    //variable declaration
    int a, b;
    printf("Enter the 1st number = ");
    scanf("%d",&a);
    printf("Enter the 2nd number = ");
    scanf("%d",&b);
    printf("Before running the function, the value of a = %d and value of b = %d\n", a, b);
    addSub(&a, &b);
    printf("After running the function, the value of a = %d and value of b = %d\n", a, b);
    return 0;
}
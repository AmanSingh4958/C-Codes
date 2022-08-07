#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age=");
    scanf("%d", &age);
    switch (age)
    {
    case 3:
        printf("Your age is 3\n");
        break;
        //  if we don't use break here then the default case will also print

    default:
        printf("Your age is not 3");
    }
    return 0;
}
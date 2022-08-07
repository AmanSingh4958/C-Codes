#include <stdio.h>
int fac(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * fac(number-1));
    }
}
int main()
{   
    int num;
    printf("Enter the no. you want factorial of=");
    scanf("%d",&num);
    printf("Factorial of %d is %d",num,fac(num));
    return 0;
}
#include <stdio.h>
int main()
{
    int a,b;
    b = 1;
    printf("Enter the number of which the table you want:");
    scanf("%d",&a);
    printf("Table of %d\n",a);
    while (b<11)
    {
        printf("%d * %d = %d\n",a,b,a*b);
        b+=1;
    }
    return 0;
}
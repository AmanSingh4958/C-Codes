#include <stdio.h>
int main()
{
    int age, i = 0;
    for (; i < 10; i++)
    {   
        if (i == 2)
        {
            continue;
            // when the value of i becomes 2 the control will be moved to the next itteration
            // i.e: "the value of i is 2" will not be printed.
        }
        printf("The value of i is %d\n",i);
        if (i+1 == 5)
        {
            break;
            // when the value of i+1 becomes 5 the whole loop will be terminated.
        }
    }
    return 0; 
}
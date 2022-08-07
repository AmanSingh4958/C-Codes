#include <stdio.h>
int main()
{
    int a = 5, b = 6;
    // Do while loop
    // it works at least once (i.e:prints output)
    do
    {
        printf("*");
        a -= 1;
    } while (a>0);
    printf("\n");

    // While loop
    while (b>0)
    {
        printf("%d",b-1);   
        b -= 1;
    }
    printf("\n");

    // For loop
    int i , j;
    for (i = 0, j = 0; i < 5, j < 6; i++, j++)
    /* the for loop works until the 2nd condition (j<6) becomes false
       updation, condition , initialisation is not necessary for this loop because 
       they can be written inside the loop too
    */
    {
        printf("%d%d\n", i,j);
    }
    
    return 0;
}
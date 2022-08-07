#include <stdio.h>
int main()
{
    int a, choice, b;
    printf("THE STAR PATTERN\n");
    printf("1. Triangular Star Pattern\n");
    printf("2. Reversed Triangular Star Pattern\n");
    printf("Enter the choice = ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("Enter the number upto which pattern is wanted = ");
        scanf("%d",&b);
        for (int i = 0; i < b; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        break;
    case 2:
        printf("Enter the number upto which pattern is wanted = ");
        scanf("%d",&b);
        for (int i = 0; i < b; i++)
        {
            for (int j = b; j > i; j--)
            {
                printf("*");
            }
        printf("\n");
        }
        break;
    default:
        printf("You have chosen the wrong choice.\n");
        main();
        break;
    }
    return 0;
}
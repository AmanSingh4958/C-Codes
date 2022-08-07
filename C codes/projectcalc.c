#include <stdio.h>

// Function for addition
int add(int x, int y)
{
    return x + y;
}

// Function for subtraction
int sub(int a, int b)
{
    return a - b;
}

// Function for division
int div(int f, int g)
{
    return f / g;
}

// Function for multiplication
int mul(int h, int i)
{
    return h * i;
}

int main()
{
    int choice, c, d, e;
    printf("SIMPLE CALCULATOR\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Enter your choice =");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter the 1st number =");
        scanf("%d", &c);
        printf("Enter the 2nd number =");
        scanf("%d", &d);
        e = add(c, d);
        printf("The addition of given numbers is %d", e);
        printf("\n");
        main();
        break;
    case 2:
        printf("Enter the 1st number =");
        scanf("%d", &c);
        printf("Enter the 2nd number =");
        scanf("%d", &d);
        e = sub(c, d);
        printf("The subtraction of given numbers is %d", e);
        printf("\n");
        main();
        break;
    case 3:
        printf("Enter the 1st number =");
        scanf("%d", &c);
        printf("Enter the 2nd number =");
        scanf("%d", &d);
        e = mul(c, d);
        printf("The multiplication of given numbers is %d", e);
        printf("\n");
        main();
        break;
    case 4:
        printf("Enter the 1st number =");
        scanf("%d", &c);
        printf("Enter the 2nd number =");
        scanf("%d", &d);
        e = div(c, d);
        printf("The division between 1st and 2nd number is %d", e);
        printf("\n");
        main();
        break;
    case 5:
        printf("OK\n");
        break;
    default:
        printf("You have entered the wrong choice\n");
        main();
        break;
    }

    return 0;
}
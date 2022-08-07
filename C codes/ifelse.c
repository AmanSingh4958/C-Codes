#include <stdio.h>

// We have to use an array to take input as a string but to understand ifelse better consider it as a rough code.

void main(){
    //how to use if else
    char a;
    int b, c;
    printf("Enter the number of subjects you have passed=");
    scanf("%d",&b);
    if (b==1)
    {
        printf("Enter the subject you have passed in [in small letters]");
        scanf("%c",&a);
        if (a=='maths') //we should use single quote('') for characters
        {
            c = 30;
        }
        if (a=='science')
        {
            c = 20;
        }
    }
    else if (b==2)
    {
        printf("Enter the subjects you have passed in [in small letters and without spaces, use comma to seperate]");
        scanf("%c\n",&a);
        if (a=='maths,science')
        {
            c = 60;
        }
    }
    else{
        printf("You can only choose max 2 subjects\n");
    }
    printf("The score you gained=%d",c);
}
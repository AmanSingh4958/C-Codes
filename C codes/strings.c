#include <stdio.h>

void function(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}

int main()
{
    // Using strings in C (With help of array)
    // char name[] = "aman"; double quotes automatically creates the null character at the end of the array.
    // char str[5] = "isha";  It is a valid string.
    // char str[4] = "isha"; It is not a valid string because the null character is not created due to less space in array.
    // char city[] = {'d','e','l','h','i','\0'}; Adding the null character is necessary.
    char *ptr = "aman"; // pointer ptr stores the address of the first element of the string and the string gets stored to allocated memory.
    printf("%s", ptr);
    // Taking user input in form of array.
    char name[10];
    printf("Enter your name = ");
    gets(name); // Use gets() to take input as string because scanf() doesn't include whitespaces. sometimes gets() get skipped due to \n in upper printf or in any function so use a getchar() above gets() so gets() doesn't get skipped.
    printf("Using puts() to print the string stored in the array.\n");
    printf("Your entered name is ");
    puts(name);
    printf("\n");
    printf("Using printf() to print the array.\n");
    printf("Your entered name is %s\n", name); // %s is used for string.
    printf("\n");
    printf("Using user defined function to print the array.\n");
    function(name); // Passing array as a parameter.
    return 0;
}
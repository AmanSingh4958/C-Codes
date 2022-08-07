#include <stdio.h>
#include <string.h>

int main()
{
    char s[] = "aman";
    // s = "bobby"; // we can't reinitialise the array containing string to have a different string.
    char *str = "aman";
    str = "bobby"; // we can reinitialise a pointer to different string because it changes the previous string in allocated memory to different string.
    printf("%s\n", s);
    printf("%s\n", str);
    int a = strlen(s); // strlen() is a library fuction for calculating the string length it doesn't include the null character '\0'
    printf("The length of string in array s is %d\n", a);
    int b = strlen(str);
    printf("The length of string in pointer str is %d\n", b);
    char source[] = "amankumarsingh";
    printf("The source contains %s\n", source);
    char target[20];
    strcpy(target, source); // now target contains a copy of source's content (string).
    printf("Now target conatain %s\n", target);
    char aa[] = "niharika";
    char bb[] = "singh";
    strcat(aa ,bb); // strcat() concatenate two strings and saves it to the first array here a is written first so new string will be saved in a.
    printf("Now 'aa' array contains %s\n", aa);
    int x = strcmp(aa,bb);
    // strcmp() is used to compare two strings and return a value which is 0 if strings match and +ive if the difference between ASCII value of 1st mismatched characters is +ve and vice verse (i.e -ve).
    printf("The value of x is %d", x);
    return 0;
}
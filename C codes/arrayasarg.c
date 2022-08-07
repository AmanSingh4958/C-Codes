#include <stdio.h>

void function1(int array[])
{
    printf("Array arr\n");
    for (int i = 0; i < 4; i++)
    {
        printf("The value at index %d of the array arr is %d\n", i, array[i]);
    }
    array[3] = 5;
    /* If we change the value of array outside the main function, it 
    changes the real value of the array too because the array is 
    passed as a pointer through function. */
}

void function2(int *ptr)
{
    // Using pointer arithmatic to access the array std.
    printf("Array std\n");
    for (int i = 0; i < 4; i++)
    {
        printf("The value at index %d of the array std is %d\n", i, *(ptr + i));
        // pointer arithmatic and deference operator is used in the above line.
    }
    *(ptr + 3) = 16;
}

int main()
{
    // Declaring array as a parameter.
    int arr[] = {1, 2, 3, 4};
    function1(arr);
    printf("The value at index 3 of array arr after changing is %d\n", arr[3]); // The value is changed in the function1().

    // Passing array's base address to the function.
    int std[] = {12, 13, 14, 15};
    function2(std);
    printf("The new value at index 3 of array std after changing is %d", std[3]); // The value is change in the function2().
    return 0;
}
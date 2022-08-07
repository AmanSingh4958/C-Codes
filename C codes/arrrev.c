#include <stdio.h>

// this is the method to reverse the array if address of the array is passed.
// void arrrev(int a, int *arr){
//     int temp;
//     for(int i = 0; i < a/2; i++){
//         temp = *(arr + i);
//         *(arr + i)  = *(arr + a - i - 1);
//         *(arr + a - i - 1) = temp;
//     }
// }

void arrrev(int a, int arr[a]){
    int temp;
    for(int i = 0; i < a/2; i++){
        temp = arr[i];
        arr[i]  = arr[a-i-1];
        arr[a-i-1] = temp;
    }
}

int main()
{
    int a;
    printf("Enter the number of elements in array = ");
    scanf("%d", &a);
    int arr[a];
    for(int i = 0; i < a; i++){
        printf("Enter %d element of the array = ", i+1);
        scanf("%d", &arr[i]);
    }
    int *ptr;
    ptr = &arr[0];
    printf("Array before inversion\n");
    for(int i = 0; i < a; i++){
        printf("%d element of the array = %d\n",i,*(ptr+i));
    }
    arrrev(a, arr);
    // arrrev(a, &arr); if we pass the address of arr
    printf("Array after inversion\n");
    // ptr = &arr[0];
    for(int i = 0; i < a; i++){
        printf("%d element of the array = %d\n",i,*(ptr+i));
    }
    return 0;
}
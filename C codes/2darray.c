#include <stdio.h>
void arrdisplay(int a, int b, int arr[a][b]){
    printf("{ { ");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            // printf("Element %d%d of 2-D array is = %d\n", i, j, arr[i][j]);
            printf("%d ,", arr[i][j]);
        }
        printf("\n");
    }
    printf("} }");
}
int main()
{
    int a, b;
    printf("Enter the number of rows for 2-D array = ");
    scanf("%d", &a);
    printf("Enter the number of coloumns for 2-D array = ");
    scanf("%d", &b);
    int arr[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("Enter the %d%d element of array = ", i, j);
            scanf("%d", &arr[i][j]);
        }
        // printf("\n");
    }
    arrdisplay(a, b, arr);
    return 0;
}
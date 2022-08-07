#include <stdio.h>

struct complex{
    int real;
    int img;
};

// void compdisplay(struct complex com[], int x){
//     for (int i = 0; i < x; i++)
//     {
//             if (com[i].img < 0)
//         {
//             int a = -com[i].img;
//             printf("Your complex number is %d - i%d\n", com[i].real, a);
//         }
//         else
//         {
//             printf("Your complex number is %d + i%d\n", com[i].real, com[i].img);
//         }
//     }
// }
// displaying complex number by using array 

void compdisplay(struct complex *com, int x){
    for (int i = 0; i < x; i++)
    {
            if ((*(com + i)).img < 0)
        {
            int a = -(*(com + i)).img;
            printf("Your complex number is %d - i%d\n", (*(com + i)).real, a);
        }
        else
        {
            printf("Your complex number is %d + i%d\n", (*(com + i)).real, (*(com + i)).img);
        }
    }
}
// displaying complex number by using pointer to array passed as an argument in function call

int main()
{
    int x;
    printf("Enter the number of complex numbers to be put in array = ");
    scanf("%d", &x);
    struct complex com[x];
    for (int i = 0; i < x; i++)
    {
        printf("Enter the real part of the complex number = ");
        scanf("%d", &com[i].real);
        printf("Enter the imaginary part of the complex number = ");
        scanf("%d", &com[i].img);
    }
    
    compdisplay(com, x);
    
    return 0;
}
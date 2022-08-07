#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, nguess = 0;
    srand(time(0));
    number = rand()%100 + 1;
    // printf("%d", number);
    do
    {
        printf("Guess the random number (between 1 to 100) =");
        scanf("%d", &guess);
        if (guess > number){
            printf("Lower Number Please !\n");
        }
        else if (guess < number)
        {
            printf("Higher Number Please !\n");
        }
        else{
            printf("You guessed the number in %d attempts\n", nguess+1);
        }
        nguess++;
    } while (guess != number);
    
    return 0;
}
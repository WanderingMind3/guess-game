#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_num();

int main()
{

    printf("***** Hello ! Welcome to the guess the number game. Best of Luck! ***** \n\n");

    int num, guess, attempt = 1;

    num = random_num();

    do
    {
        printf("Enter Guess : ");
        scanf("%d", &guess);

        if (num > guess)
        {
            printf("Higher Number Please \n");
        }
        else if (num < guess)
        {
            printf("Lower Number Please \n");
        }
        else
        {
            printf("You Won in %d attempts\n", attempt);
        }
        attempt++;
    } while (num != guess);

    return 0;
}
int random_num()
{
    int result;
    srand(time(0));
    result = rand()%100 + 1;
    return result;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char *argv[])
{
    int guess_num, range, random_num;
    int guess_count = 0;
    range = guess_num * 4;
    srand(time(NULL));
    random_num = rand() % range + 1;
    do
    {
       
        printf("Enter your  guess number : ");
        scanf("%d", &guess_num);

        if (random_num < guess_num)

        {
            printf("(%d) Lower guess please !!\n ",guess_num);
        }
        else if (random_num > guess_num)

        {
            printf("(%d) Higher guess please !! \n",guess_num);
        }
        guess_count ++;

    } while (random_num != guess_num);
    printf("You guessed the number(%d) correctly in %d count. !\n ",guess_num,guess_count);
    return 0;
}

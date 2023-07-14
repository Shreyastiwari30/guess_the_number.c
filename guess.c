#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number,guess,chance=0;
    srand(time(0));
    number = rand()%100+1;
  //  printf("The number is : %d",number); 
    do
    {
        printf("Guess the number:");
        scanf("%d",&guess);
        if(guess>number)
        {
            printf("smaller number please\n");
        }
        else if(guess<number)
        {
            printf("Greator number please\n");
        }
        else
        {
            printf("you guessed it in %d attempts \n",chance);
        }
        chance++;
    } while (guess!=number);
    
    return 0;
}

#include <stdlib.h>
#include <time.h>

//Generic number generator that returns an int to game.c
int getRandomNumber()
{
    int randomNum;
    
    srand(time(NULL));  
    randomNum = rand() % 3;  

    return randomNum;
}
#include <stdio.h>

//This file prompts the user with a question and returns that input to game.c
int promptPlayer()
{   
    int playerGuess;

    printf("Ditt drag (Sten=0/Sax=1/Pase=2)");
    scanf("%d", &playerGuess);

    return playerGuess;
}



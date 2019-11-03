// File:    game.c
// Summary: This program plays rock paper scissors with the user
// Compile: // gcc game.c calcResults.c promptPlayer.c randomizer.c -o "Execution Name"
// Version: 1.0
// Owner: Adam Palmkvist
// ---------------------------------------------------------------
// Log: 2019-10-28 Created the file: Adam Palmkvist
// 2019-10-30 Modified by Adam Palmkvist. 
// Adding additional files and refactor code
// Minor bug: EOF runs the iteration once more before closing down

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>

#include "calcResults.h"
#include "promptPlayer.h"
#include "randomizer.h"

int main()
{
    //Keeping it consize and clearing it once upon start
    char goAgain = 'j';
    
    system("cls");
    while(toupper(goAgain) == 'J')
    {
        calcIfPlayerWon(promptPlayer(), getRandomNumber());
        printf("Again?");
        scanf("%s", &goAgain);
    }
}

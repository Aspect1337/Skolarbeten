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
// Log: 2019-11-1 Modified by Adam Palmkvist. 
// Refactor English printed text to Swedish.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "calcResults.h"
#include "promptPlayer.h"
#include "randomizer.h"

int main()
{
    char goAgain = 'J';
    while(toupper(goAgain) == 'J')
    {
        system("cls");
        calcIfPlayerWon(promptPlayer(), getRandomNumber());
        printf("Igen (J/N)?: "); 
        scanf("%s", &goAgain);
    }
}
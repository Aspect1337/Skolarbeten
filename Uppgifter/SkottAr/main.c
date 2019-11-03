// File:    main.c
// Summary: This program calculates if the given year is a leap year
// Compile: // gcc main.c calculateIfSkottAr.c -o "Execution Name"
// Version: 1.0
// Owner: Adam Palmkvist
// ---------------------------------------------------------------
// Log: 2019-10-30 Created the file: Adam Palmkvist
// Minor bug: EOF runs the iteration once more before closing
// Log: 2019-11-1 Created the file: Adam Palmkvist
// Last change: Change printed language to Swedish

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "calculateIfSkottAr.h"

int main()
{
    //Year can be negative as well in case of pre-christianity
    int year = 0;
    int* pYear = &year;
    char goAgain = 'J';
    
    //Keeping it consize and only clearing the screen once
    system("cls");

    while(toupper(goAgain) == 'J')
    {
        printf("Skriv ner et artal: ");
        scanf("%d", &year);

        //Check if it is leap year
        if(isLeapYear(pYear))
            printf("Ar %d Ar ett skottar", *pYear);
        //Check if it's not a leap year
        if(!isLeapYear(pYear))
            printf("Ar %d Ar INTE ett skottar", *pYear);

        printf("\n");
        printf("Igen? (J/N)\n");
        scanf("%s", &goAgain);
    }
}

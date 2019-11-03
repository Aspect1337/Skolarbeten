// File:    Main.c
// Summary: This program calculates two numbers using
// Compile: gcc main.c calculate.c -o "Execution name"
// Version: 1.2
// Owner: Adam Palmkvist
// ---------------------------------------------------------------
// Log: 2019-10-28 Created the file: Adam Palmkvist
// 2019-10-30 Modified by Adam Palmkvist.
// Removal of unnecessary code; created a cleaner end product for user
// 2019-10-11 Modified by Adam Palmkvist.
// Refactor pieces of code and fixing a bug when typing
// a character into the code when it expects a digit

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "calculate.h"

void printMenu();

int main()
{
    char goAgain = 'J';
    double x;
    double y;

    char allowedCharacters[4] = {'1', '2', '3', '4'};
    int method = 0;
    char scanBuffer[80] = "";

    //Run as long as the character "goAgain" is = j
    while(toupper(goAgain) == 'J')
    {
        //Init application by prompting the user with a menu followed up with his choice of arithmetic
        printMenu();
        printf("Valj ett av menyvalen (Forsta siffran galls ifall det ar en siffra): ");
        scanf("%s", scanBuffer);

        //If it is a digit: iterate this
        if(isValidChoice(scanBuffer, allowedCharacters))
        {
            method = scanBuffer[0] - '0';
            printf("Skriv ner ditt forsta varde: ");
            x = isValidInput();

            printf("Skriv ner ditt andra varde: ");
            y = isValidInput();

            processMenuOptions(method, x, y);

            printf("\n");
            printf("\n");
            printf("Igen? (J/N)\n");
            scanf("%s", &goAgain);
        }
    }
}

// Clears and prints the menu.
// Note: Stays in main.c as it's not a calculation of any kind
void printMenu()
{
    system("cls");
    printf("Valj ett nummer av forsedd meny\n");
    printf("1 = Addition \n");
    printf("2 = Substraktion\n");
    printf("3 = Multiplikation\n");
    printf("4 = Division\n");
    printf("\n");
}
#include <stdio.h>
#include <stdbool.h>

// Here is the calculation 
void calcIfPlayerWon(int playerBet, int computerBet)
{
    // Iteration goes as following: "sten sax påse"
    int rock = 0;
    int scissors = 1;
    int paper = 2;

    // Both have same input:
    if(playerBet == computerBet)
        printf("Bada valde samma");
    // Ways for player to win
    else if(playerBet == rock && computerBet == scissors)
        printf("Du vann");
    else if(playerBet == scissors && computerBet == paper)
        printf("Du vann");
    else if(playerBet == paper && computerBet == rock)
        printf("Du vann");
    // Ways for computer to win
    else if(playerBet == paper && computerBet == scissors)
        printf("Dator vann");
    else if(playerBet == rock && computerBet == paper)
        printf("Dator vann");
    else if(playerBet == scissors && computerBet == rock)
        printf("Dator vann");

    printf(" - (Datorn valde %d)", computerBet);
    printf("\n");
}
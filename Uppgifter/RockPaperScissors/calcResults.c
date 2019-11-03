#include <stdio.h>
#include <stdbool.h>

//Here is the calculation 
void calcIfPlayerWon(int playerBet, int computerBet)
{
    //Iteration goes as following: "sten sax påse"
    int rock = 0;
    int scissors = 1;
    int paper = 2;

    //Both have same input:
    if(playerBet == computerBet)
        printf("Spelare och dator valde samma");
    //The possible ways for the player to win
    else if(playerBet == rock && computerBet == scissors)
        printf("Du vann draget");
    else if(playerBet == scissors && computerBet == paper)
        printf("Du vann draget");
    else if(playerBet == paper && computerBet == rock)
        printf("Du vann draget");
    //The possible ways for computer to to win
    else if(computerBet == rock && playerBet == scissors)
        printf("Datorn vann draget");
    else if(computerBet == scissors && playerBet == paper)
        printf("Datorn vann draget");
    else if(computerBet == paper && playerBet == rock)
        printf("Datorn vann draget");
    printf("\n");
}
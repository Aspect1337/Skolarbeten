// File:    cube.c
// Summary: This program takes the side of a cube and returns its volume
// Compile: // gcc cube.c calculator.c -o "Execution Name"
// Version: 1.0
// Owner: Adam Palmkvist
// ---------------------------------------------------------------
// Log: 2019-10-28 Created the file: Adam Palmkvist

#include <stdio.h>
#include <stdlib.h>

#include "calculator.h"

//Initialize "main"
int main()
{
    double cubeLength;
    double cubeVolume = 0;

    //Clearing the screen once upon start
    system("cls");

    printf("Skriv in langden i meter pa kuben:\n");
    scanf("%lf", &cubeLength);

    convertToDecimeter(&cubeLength);
    cubeVolume = calculateVolume(cubeLength);

    printf("Kuben fyller totalt: %lf liter", cubeVolume);
}

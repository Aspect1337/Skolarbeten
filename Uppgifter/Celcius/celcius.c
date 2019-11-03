// File:    celcius.c
// Summary: This program calculates fahrenheit to -
// celcius and returns a message based on the input
// Compile: // gcc celcius.c calculateFahrenheitToCelcius.c -o "Execution Name"
// Version: 1.0
// Owner: Adam Palmkvist
// ---------------------------------------------------------------
// Log: 2019-10-30 Created the file: Adam Palmkvist
// Minor bug: EOF runs the iteration once more before closing

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 

#include "calculateFahrenheitToCelcius.h"

int main()
{
    double tempInFarenheit = 0;
    double tempInCelcius = 0;
    double* pTemperature = &tempInCelcius;
    char goAgain = 'j';

    while(toupper(goAgain) == 'J')
    {
        system("cls");
        printf("Temperaturomvandling - EOF for att avsluta\n");
        printf("====================");
        printf("Ange dagstemperatur i Fahrenheit:");
        scanf("%lf", &tempInFarenheit);
        convertToCelcius(tempInFarenheit, pTemperature);

        if(isAboveZero(tempInCelcius))
            printf("%lf grader Celsius. Sadana dagar ser vi fram emot\n", *pTemperature);
        else
            printf("%lf grader Celsius. Sadana dagar vill man stanna inne!\n", *pTemperature);  
        printf("Igen? (J/N)");

        scanf("%s", &goAgain);
    }
}
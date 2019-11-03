#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

//These 4 has to be highest up to avoid duplicate code and declaring them twice 
double addNumbers(double x, double y)
{
   return x + y;
}

double subtractNumbers(double x, double y)
{
    return x - y;
}

double multiplyNumbers(double x, double y)
{
    return x * y;
}

double divideNumbers(double x, double y)
{
    return x / y;
}

// Computes X and Y based on the method provided
void processMenuOptions(int method, double x, double y)
{
    if(method == 1)
    {
        printf("Summan ar: %lf", addNumbers(x, y));
    }
    else if(method == 2)
    {
        printf("Differensen ar: %lf", subtractNumbers(x, y));
    }
    else if(method == 3)
    {
        printf("Produkten ar: %lf", multiplyNumbers(x, y));
    }
    else if(method == 4)
    {
        printf("Kvoten ar: %lf", divideNumbers(x, y));
    }
}

// Check if the choice of 0-3 is valid and nothing else.
// Note: If the first var is an acceptable digit: Pick that.
bool isValidChoice(char menuChoice[], char* allowedCharacters)
{
    if(!isalpha(menuChoice[0]))
    {
        for(int i = 0; i < strlen(allowedCharacters); i++)
        {
            if(menuChoice[0] == allowedCharacters[i])
                return true;
        }
    }
    return false;
}

// Check if the input that is X and Y are valid numbers and not characters
// Note: Program picks all the valid digits until an alphabetic one is read.
double isValidInput()
{
    bool validInput = false;
    char input[20] = "";
    double var;
    do
    {
        scanf("%s", &input);
        if(!isdigit(input[0]))
        {
            printf("fel, forsok igen: ");
            continue;
        }
        else
        {
            var = atof(input);
            return var;
            validInput = true;
        }

    } while (!validInput);
}



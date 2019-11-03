#include <stdbool.h>

// Check if given year is a leap year
bool isLeapYear(int* year)
{
    if(*year % 4 == 0 && *year % 100 != 0 || *year % 400 == 0) 
        return true;
    else
        return false;
}



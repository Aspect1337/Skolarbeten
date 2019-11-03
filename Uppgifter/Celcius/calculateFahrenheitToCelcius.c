#define fiveDividedByNine 0.55555556

#include <stdbool.h>

void convertToCelcius(double farenheit, double* pTemperature)
{
    *pTemperature = farenheit - 32; 
    //predefined 5/9 as it remains a constant in this calculation
    *pTemperature *= fiveDividedByNine; 
}

bool isAboveZero(double temp)
{
    if(temp > 0)
        return true;
    else
        return false;
}
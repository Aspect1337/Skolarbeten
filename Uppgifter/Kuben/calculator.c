#include <math.h>

// Convert to volume
double calculateVolume(double sideLength)
{
    return pow(sideLength, 3);
}

// Convert meter to decimeter
void convertToDecimeter(double* meter)
{
    *meter *= 10;
}
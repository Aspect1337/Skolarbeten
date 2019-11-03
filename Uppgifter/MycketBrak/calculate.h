#include <stdbool.h>

double addNumbers(double x, double y);
double subtractNumbers(double x, double y);
double multiplyNumbers(double x, double y);
double divideNumbers(double x, double y);
double isValidInput();
void processMenuOptions(int method, double x, double y);
bool isValidChoice(char menuChoice[], char* allowedCharacters);
// Make a macro that defines a debugger that prints the variable name, its value, the file in which it is used, and the line of code that prints this information

#include <stdio.h>

#define DEBUG(variable) printf("Variable %s has value %d in file %s on line %d ", #variable, variable, __FILE__, __LINE__)

int main(void)
{
    int a = 5;
    DEBUG(a);
    return 0;
}
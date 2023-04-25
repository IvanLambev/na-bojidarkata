#include <stdio.h>
#include "quadraticroots.h"

int main()
{
    double a = 1.0, b = 2.0, c = -3.0;
    QuadraticRootsResult result = findroots(a, b, c);

    if (result.norealroots)
    {
        printf("No real roots\n");
    }
    else
    {
        printf("x1 = %lf, x2 = %lf\n", result.x1, result.x2);
    }

    return 0;
}

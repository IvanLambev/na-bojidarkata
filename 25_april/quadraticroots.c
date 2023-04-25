#include <math.h>
#include "quadraticroots.h"

QuadraticRootsResult findroots(double a, double b, double c)
{
    QuadraticRootsResult result;

    double discriminant = (b * b) - (4 * a * c);

    if (discriminant < 0)
    {
        result.norealroots = 1;
        return result;
    }

    result.norealroots = 0;
    result.x1 = (-b + sqrtl(discriminant)) / (2 * a);
    result.x2 = (-b - sqrtl(discriminant)) / (2 * a);

    return result;
}

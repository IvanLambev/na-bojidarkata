#ifndef _QUADRATICROOTS_H_
#define _QUADRATICROOTS_H_

typedef struct QuadraticRootsResult
{
    double x1;
    double x2;
    int norealroots;
} QuadraticRootsResult;

QuadraticRootsResult findroots(double a, double b, double c);

#endif

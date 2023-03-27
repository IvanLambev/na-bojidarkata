#include "safeint.h"
#include <limits.h>
#include <stdlib.h>
#include <string.h>

SafeResult safeadd(int x, int y)
{
    SafeResult result;
    result.errorflag = 0;

    // Check for overflow or underflow
    if ((y > 0 && x > INT_MAX - y) || (y < 0 && x < INT_MIN - y))
    {
        result.errorflag = 1;
    }
    else
    {
        result.value = x + y;
    }

    return result;
}

SafeResult safesubtract(int x, int y)
{
    SafeResult result;
    result.errorflag = 0;

    // Check for overflow or underflow
    if ((y < 0 && x > INT_MAX + y) || (y > 0 && x < INT_MIN + y))
    {
        result.errorflag = 1;
    }
    else
    {
        result.value = x - y;
    }

    return result;
}

SafeResult safemultiply(int x, int y)
{
    SafeResult result;
    result.errorflag = 0;

    // Check for overflow or underflow
    if ((y > 0 && x > INT_MAX / y) || (y < 0 && x < INT_MAX / y))
    {
        result.errorflag = 1;
    }
    else
    {
        result.value = x * y;
    }

    return result;
}

SafeResult safedivide(int x, int y)
{
    SafeResult result;
    result.errorflag = 0;

    // Check for division by zero
    if (y == 0)
    {
        result.errorflag = 1;
    }
    else
    {
        result.value = x / y;
    }

    return result;
}

SafeResult safestrtoint(char *str)
{
    SafeResult result;
    result.errorflag = 0;

    int len = strlen(str);
    int i = 0;
    int sign = 1;
    int value = 0;

    // Check for negative sign
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }

    // Convert string to integer
    while (i < len)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            SafeResult tmp = safemultiply(value, 10);
            if (tmp.errorflag)
            {
                result.errorflag = 1;
                break;
            }
            value = tmp.value;

            int digit = str[i] - '0';
            SafeResult tmp2 = safeadd(value, sign * digit);
            if (tmp2.errorflag)
            {
                result.errorflag = 1;
                break;
            }
            value = tmp2.value;
        }
        else
        {
            result.errorflag = 1;
            break;
        }
        i++;
    }

    if (result.errorflag)
    {
        result.value = 0;
    }
    else
    {
        result.value = sign * value;
    }

    return result;
}

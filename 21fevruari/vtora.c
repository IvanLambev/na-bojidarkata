#include <stdio.h>

#ifdef ARRAY_SIZE
#if ARRAY_SIZE >= 1 && ARRAY_SIZE <= 10
int array[ARRAY_SIZE];
#define POW2(n) (1 << (n))
#define INIT_ARRAY                       \
    for (int i = 0; i < ARRAY_SIZE; i++) \
    array[i] = POW2(i)
#else
#warning "Invalid ARRAY_SIZE value"
#endif
#else
#warning "ARRAY_SIZE is not defined"
#endif

int main()
{
#ifdef INIT_ARRAY
    INIT_ARRAY;
    for (int i = 0; i < ARRAY_SIZE; i++)
        printf("%d\n", array[i]);
#endif
    return 0;
}

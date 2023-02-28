#include <stdio.h>

#define SQUARE_SUM(A, B) ((A + B) * (A + B))

int main() {
    int a = 2, b = 3;
    int result = SQUARE_SUM(a, b);
    printf("(%d + %d) ^ 2 = %d\n", a, b, result);
    return 0;
}

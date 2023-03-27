#include <stdio.h>
#include <stdlib.h>
#include "safeint.h"
#include "util.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <num1> <num2>\n", argv[0]);
        return 1;
    }
    int num1 = safestrtoint(argv[1]);
    int num2 = safestrtoint(argv[2]);
    SafeResult result = safemultiply(num1, num2);
    if (result.errorflag == 1) {
        printf("Error: Overflow or underflow occurred\n");
        return 1;
    }
    printf("%d\n", result.value);
    return 0;
}

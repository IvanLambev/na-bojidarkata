#include <stdio.h>
#include <stdlib.h>
#include "safeint.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Usage: %s num1 num2\n", argv[0]);
        return 1;
    }
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    SafeResult result = safedivide(num1, num2);
    if (result.errorflag == 1) {
        fprintf(stderr, "Error: division by zero or overflow occurred\n");
        return 1;
    }
    printf("%d\n", result.value);
    return 0;
}

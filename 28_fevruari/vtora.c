#include <stdio.h>

//gcd означава „най-голям общ делител“, а lcm означава „най-малко общо кратно“.


int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int a = 12, b = 18;
    int result = lcm(a, b);
    printf("LCM of %d and %d is %d\n", a, b, result);
    return 0;
}

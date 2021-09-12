#include <stdio.h>

double e(int x, int n) {
    int s = 1;
    for (n > 0; n--) s = 1 + s * x / n;
    return s;
}

int main() {
    printf("%lf \n", e(1, 4));
    return 0;
}

// Taylor Series horner rule
// X = 1
// N = 0, e(0) = 1
// N = 1, e(1) = 1 + X/1
// N = 2, e(2) = 1 + X/1 + (X * X)/(1 * 2) = 1 + X(1 + X/2)
// N = 3, e(3) = 1 + X/1 + (X * X)/(1 * 2) + (X * X * X)/(1 *2 *3) = 1 + X(1 + X/2)(1 + X/3 * 1)

// Num of operations = Order of N operations

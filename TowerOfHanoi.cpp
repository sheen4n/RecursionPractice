#include <stdio.h>

void TOH(int n, int A, int B, int C) {
    if (n > 0) {
        TOH(n - 1, A, C, B); // Use previous solution to move from A to B for n - 1, using C as intermediate
        printf("(%d,%d)\n", A, C); // Move directly from A to C
        TOH(n - 1, B, A, C); // use previous solution to move from B to C, using A as intermediate
    }
}

int main() {
    TOH(4, 1, 2, 3);
    return 0;
}
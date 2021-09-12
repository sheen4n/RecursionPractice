#include <stdio.h>

// E to the power of 4, for example
int X = 4;

double e(int n)
{
    static double p=1,f=1;
    double r;

    if(n==0) return 1;
    r=e(n-1);
    p=p*X;
    f=f*n;
    return r+p/f;
}
int main()
{
    printf("%lf \n",e(15));
    return 0;
}

// Taylor Series
// X = 1
// N = 0, e(0) = 1
// N = 1, e(1) = 1 + X/1
// N = 2, e(2) = 1 + X/1 + (X * X)/(1 * 2)
// N = 3, e(3) = 1 + X/1 + (X * X)/(1 * 2) + (X * X * X)/(1 *2 *3)

// Num of operations
// 0 + 1 + 2 + 4 + 6... = 2 * ( 1 + 2 + 3 ... ) = 2 * (N (N + 1) / 2) = Order of N square
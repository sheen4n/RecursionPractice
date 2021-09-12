#include <stdio.h>

double e(int x, int n)
{
    static double s;
    if(n==0) return s;
    s=1+x*s/n;
    return e(x,n-1);
}
int main()
{
    printf("%lf \n",e(2,10));
    return 0;
}

// Taylor Series horner rule
// X = 1
// N = 0, e(0) = 1
// N = 1, e(1) = 1 + X/1
// N = 2, e(2) = 1 + X/1 + (X * X)/(1 * 2) = 1 + X(1 + X/2)
// N = 3, e(3) = 1 + X/1 + (X * X)/(1 * 2) + (X * X * X)/(1 *2 *3) = 1 + X(1 + X/2)(1 + X/3)

// Num of operations = Order of N operations

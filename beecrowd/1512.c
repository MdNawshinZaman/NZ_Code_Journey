#include <stdio.h>
#include <math.h>
#include <string.h>

int gcd(int a, int b)
{
    if(b == 0) return a;
    int r = a % b;
    return gcd(b,r);
}

int main(void)
{
    printf("%d\n", gcd(259, 111));


    return 0;
}
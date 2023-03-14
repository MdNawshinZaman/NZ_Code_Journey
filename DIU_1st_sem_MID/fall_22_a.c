#include<stdio.h>

int main(void)
{
    int a = 5, b = 7, c = 4, d = 8, e = 9;


    //Equation 1
    a += a * b / c % d++ + a | b;

    //Equation 2
    //b *= (a/b) >= c + d + e++ - e;

    printf(" a = %d\n b = %d\n c = %d\n d = %d\n e = %d\n", a, b, c, d, e);
    return 0;
}
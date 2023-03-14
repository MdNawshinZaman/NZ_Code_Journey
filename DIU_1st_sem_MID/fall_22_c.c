#include<stdio.h>

int main()
{
    int a = 2, b = 1, c = 3, d = 4, e = 6;

    //Equation 1
    a += a && b & c || d | e + 7;

    //Equation 2
    a *= a++ + ++a * b / c % d;

    printf(" a = %d\n b = %d\n c = %d\n d = %d\n e = %d\n", a, b, c, d, e);

    return 0;
}
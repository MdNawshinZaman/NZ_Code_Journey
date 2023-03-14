#include<stdio.h>

int main()
{
    int a = 5, b = 7, c = 4, d = 8, e = 9;

    //Equation 1
    e -= a + (++c / d) * (e & 8) - (d | b);

    //Equation 2
    a *= a = b? (c * d) && e : (c * d) % b ; // ? true : false


    printf(" a = %d\n b = %d\n c = %d\n d = %d\n e = %d\n", a, b, c, d, e);

    return 0;
}
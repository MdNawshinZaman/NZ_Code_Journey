#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    int a, b, r, q;
    scanf("%d %d", &a, &b);//-7 3

    q = ceil(fabs(a / (double)b)) * (-1); // -3
    //divident = divisor * quotient + reminder
    // a = b * q + r
    r = a - (b * q); // 2

    printf("%d %d\n", q, r);

    return 0;
}
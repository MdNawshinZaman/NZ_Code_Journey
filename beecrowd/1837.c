#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    int a, b, r, q;
    scanf("%d %d", &a, &b);

    //divident = divisor * quotient + reminder
    // a = b * q + r
    q = a / (double)b;
    r = a - (b * q);

    if(r < 0)
    {
        q--;
        r = a - (b * q);
    }
    printf("%d %d\n", q, r);

    return 0;
}
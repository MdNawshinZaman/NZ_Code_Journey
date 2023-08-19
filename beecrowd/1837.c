// unfinished

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    int a, b, r, q;
    scanf("%d %d", &a, &b);

    //divident = divisor * quotient + reminder
    // a = b * q + r
    q = a / b;
    r = a % b;

    if(r < 0)
    {
        if(q <= 0) q = ceil(fabs(a / (double)b)) * -1;
        else q = ceil(a / (double)b);
        r = a - (b * q);
    }
    printf("%d %d\n", q, r);

    return 0;
}
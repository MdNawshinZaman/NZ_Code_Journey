#include <stdio.h>
#include <math.h>
#define pi 3.14

int main(void)
{
    double v, d, r, h;
    while(scanf("%lf %lf", &v, &d) != EOF)
    {
        r = d / 2.0;
        h = v/(pi * pow(r , 2));

        printf("ALTURA = %.2lf\nAREA = %.2lf", h, r);
    }

    return 0;
}
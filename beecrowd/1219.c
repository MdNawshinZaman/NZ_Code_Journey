#include <stdio.h>
#include <math.h>
#include <string.h>
#define PI 3.1415926535897

int main(void)
{
    int a, b, c;
    while(scanf("%d %d %d", &a, &b, &c) != EOF)
    {
        double sun_flwr, violt, rose;

        violt =  0.5 * a * b;
        sun_flwr =(PI * c * c) - violt;

        double r = (a + b - c)/2.0;
        rose = PI * r * r;

        violt -= rose;

        printf("%.4lf %.4lf %.4lf\n", sun_flwr, violt, rose);

    }
    return 0;
}
#include <stdio.h>
#include <math.h>
int main() {

    double pi=3.14159, r, vol;
    scanf("%lf",&r);
    vol = (4/3.0)*pi*pow(r,3);
    printf("VOLUME = %.3lf\n",vol);

    return 0;
}
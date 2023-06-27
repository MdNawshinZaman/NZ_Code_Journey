#include <stdio.h>

int main()
{
    double avg, phy, math, funda, pps, ppslab, eng;

    printf("phy: ");
    scanf("%lf", &phy);

    printf("math: ");
    scanf("%lf", &math);

    printf("funda: ");
    scanf("%lf", &funda);

    printf("pps: ");
    scanf("%lf", &pps);

    printf("ppslab: ");
    scanf("%lf", &ppslab);

    printf("eng: ");
    scanf("%lf", &eng);

    printf("avg: ");
    scanf("%lf", &avg);

    avg = (avg * 16.5) / 3.0;
    int n = 0;
    if (phy == 1)n++;
    if (math == 1)n++;
    if (funda == 1)n++;
    if (pps == 1)n++;
    if (ppslab == 1)n++;
    if (eng == 1)n++;

    //ppslab /= 2;

    double unknown = (avg - (phy + math + funda + pps + ppslab + eng)) + n;
    //printf("n = %d",n);
    if (ppslab == 1) unknown *= 2;
    printf("\n%.3lf\n\n", unknown);

    return 0;
}
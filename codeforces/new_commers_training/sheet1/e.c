#include<stdio.h>

int main(void)
{
    double r, area;
    scanf("%lf", &r);

    area = 3.141592653 * r * r;
    printf("%.9lf\n", area);


    return 0;
}
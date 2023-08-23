#include <stdio.h>
#include <math.h>

double div(double n, double m)
{
    if(n == 0) return 0;
    if(n == 1) return 1/m;
    return 1/(m + div(n-1, m));
}

int main(void)
{
    int n;
    scanf("%d", &n);

    printf("%.10lf\n", 3 + div(n , 6));

    return 0;
}
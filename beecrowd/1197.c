#include<stdio.h>

int main(void)
{
    int v, t;
    double a, s;
    while(scanf("%d %d", &v, &t) != EOF)
    {
        s = 0;
        a = v / (float)t;
        s = .5 * a * (t * 2) * (t  * 2);

        printf("%.lf\n", s);
    }

    return 0;
}
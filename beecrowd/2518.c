#include<stdio.h>
#include<math.h>

int main(void)
{
    int n, h, c, l;

    double x, area;

    while(scanf("%d %d %d %d", &n, &h, &c, &l) != EOF)
    {
        x = sqrt(pow(c , 2) + pow(h , 2));
        area = x * l;

        printf("%.4lf\n", area);
    }



    return 0;
}
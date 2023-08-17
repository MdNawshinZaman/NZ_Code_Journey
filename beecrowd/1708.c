#include <stdio.h>
#include <math.h>

int main(void)
{
    int x, y;
    scanf("%d %d", &x, &y);

    printf("%.lf\n", ceil(y/(float)(y-x)));

    return 0;
}
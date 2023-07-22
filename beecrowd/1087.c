#include<stdio.h>
#include<math.h>

int main(void)
{
    while(1)
    {
        int x1, y1, x2, y2;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

        double d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

        printf("%lf\n", d);
    }

    return 0;
}
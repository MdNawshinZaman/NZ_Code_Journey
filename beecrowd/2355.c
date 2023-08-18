#include <math.h>
#include <stdio.h>

int main(void)
{
    int time;
    while (1)
    {
        scanf("%d", &time);
        if (time == 0) break;

        double br = 1 / 90.0, gr = 7 / 90.0;
        printf("Brasil %.lf x Alemanha %.lf\n", floor(time * br), ceil(time*gr));
    }

    return 0;
}
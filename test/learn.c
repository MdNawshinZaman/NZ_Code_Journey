#include <stdio.h>
#include <math.h>

int main(void)
{

    for(double i = 0.2; i <= 2.0; i+=0.2)
    {
        printf("%.2f = %.f\n", i, trunc(i));
    }

    return 0;
}
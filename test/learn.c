#include <stdio.h>
#include <math.h>

int main(void)
{

    for(float i = 0.2; i < 2; i+=0.2)
    {
        printf("%.2f = %f\n", i, trunc(i));
    }

    return 0;
}
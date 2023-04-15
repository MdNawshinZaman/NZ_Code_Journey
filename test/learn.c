#include <stdio.h>
#include <math.h>
int main(void)
{
    float a = 2.234888;
    printf("%.6f\n", a);

    printf("%.6f\n", ceil(a*1000)/1000.0);

    return 0;
}

#include<stdio.h>

int main(void)
{
    float a = 2.234888;
    printf("%.3f\n", a);

    printf("%.3f\n", (int)(a*1000)/1000.0);

    return 0;
}
